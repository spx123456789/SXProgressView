//
//  ViewController.m
//  SVProgressDemo
//
//  Created by SHANPX on 16/8/3.
//  Copyright © 2016年 SHANPX. All rights reserved.
//

#import "ViewController.h"
#import "SXProgressView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    SXProgressView *m = [[SXProgressView alloc] initWithFrame:CGRectMake(10, 100, 100, 100)];
    [m setColorArray:@[[UIColor redColor],[UIColor blueColor],[UIColor greenColor]] shadeArray:@[@0.3,@0.5,@0.7]];
    m.progress = 0.7;
    SXProgressView *mm = [[SXProgressView alloc] initWithFrame:CGRectMake(10, 230, 100, 100)];
    [mm setColorArray:@[[UIColor redColor],[UIColor blueColor],[UIColor greenColor]] shadeArray:@[@0.3,@0.5,@0.7]];
    mm.progress = 0.7;
    [[SXProgressView appearance] setShowText:1];
    [self.view addSubview:m];
    [self.view addSubview:mm];

    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
