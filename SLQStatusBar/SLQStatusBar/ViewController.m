//
//  ViewController.m
//  SLQStatusBar
//
//  Created by Christian on 15/8/2.
//  Copyright (c) 2015年 slq. All rights reserved.
//

#import "ViewController.h"
#import "SLQStatusBar.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}
- (IBAction)show:(id)sender {
    [SLQStatusBar showSuccess:@"加载成功"];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
