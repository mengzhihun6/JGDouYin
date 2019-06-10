//
//  JGBaseViewController.m
//  JGDouYin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "JGBaseViewController.h"

@interface JGBaseViewController ()

@end

@implementation JGBaseViewController

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self initNavigationBarTransparent];
}



- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void) initNavigationBarTransparent {
    [self setNavigationBarTitleColor:ColorWhite];
    [self setNavigationBarBackgroundImage:[UIImage new]];
    [self setStatusBarStyle:UIStatusBarStyleLightContent];
    [self setNavigationBarShadowImage:[UIImage new]];
    [self initLeftBarButton:@"icon_titlebar_whiteback"];
    [self setBackgroundColor:ColorThemeBackground];
}



- (void) setBackgroundColor:(UIColor *)color {
    self.view.backgroundColor = color;
}

- (void) setTranslucentCover {
    UIBlurEffect *blurEffect =[UIBlurEffect effectWithStyle:UIBlurEffectStyleDark];
    UIVisualEffectView *visualEffectView = [[UIVisualEffectView alloc]initWithEffect:blurEffect];
    visualEffectView.frame = self.view.bounds;
    visualEffectView.alpha = 1;
    [self.view addSubview:visualEffectView];
}

- (void) initLeftBarButton:(NSString *)imageName {
    UIBarButtonItem *leftButton = [[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:imageName] style:UIBarButtonItemStylePlain target:self action:@selector(back)];
    leftButton.tintColor = ColorWhite;
    self.navigationItem.leftBarButtonItem = leftButton;
}

- (void) setStatusBarHidden:(BOOL) hidden {
    [[UIApplication sharedApplication] setStatusBarHidden:hidden];
}

- (void) setStatusBarBackgroundColor:(UIColor *)color {
    UIView *statusBar = [[[UIApplication sharedApplication] valueForKey:@"statusBarWindow"] valueForKey:@"statusBar"];
    if ([statusBar respondsToSelector:@selector(setBackgroundColor:)]) {
        statusBar.backgroundColor = color;
    }
}

- (void) setNavigationBarTitle:(NSString *)title {
    self.navigationItem.title = title;
}

- (void) setNavigationBarTitleColor:(UIColor *)color {
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSForegroundColorAttributeName:color}];
}

- (void) setNavigationBarBackgroundColor:(UIColor *)color {
    [self.navigationController.navigationBar setBackgroundColor:color];
}

- (void) setNavigationBarBackgroundImage:(UIImage *)image {
    [self.navigationController.navigationBar setBackgroundImage:image forBarMetrics:UIBarMetricsDefault];
}

- (void) setStatusBarStyle:(UIStatusBarStyle)style {
    [UIApplication sharedApplication].statusBarStyle = style;
}

- (void) setNavigationBarShadowImage:(UIImage *)image {
    [self.navigationController.navigationBar setShadowImage:image];
}

- (void) back {
    [self.navigationController popViewControllerAnimated:true];
}

- (void) dismiss {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (CGFloat) navagationBarHeight {
    return self.navigationController.navigationBar.frame.size.height;
}

- (void) setLeftButton:(NSString *)imageName {
    UIButton *leftButton = [UIButton buttonWithType:UIButtonTypeCustom];
    leftButton.frame = CGRectMake(15.0f, StatusBarHeight + 11, 20.0f, 20.0f);
    [leftButton setBackgroundImage:[UIImage imageNamed:imageName] forState:UIControlStateNormal];
    [leftButton addTarget:self action:@selector(dismiss) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:leftButton];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self.view bringSubviewToFront:leftButton];
    });
}

- (void) setBackgroundImage:(NSString *)imageName {
    UIImageView *background = [[UIImageView alloc] initWithFrame:self.view.bounds];
    background.clipsToBounds = YES;
    background.contentMode = UIViewContentModeScaleAspectFill;
    background.image = [UIImage imageNamed:imageName];
    [self.view addSubview:background];
}



/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
