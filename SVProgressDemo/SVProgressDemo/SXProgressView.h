//
//  MyProgressView.h
//  OPrationDemo
//
//  Created by SHANPX on 16/8/3.
//  Copyright © 2016年 SHANPX. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <math.h>

@interface SXProgressView : UIView

@property (strong,nonatomic)UILabel *textLabel;

@property (nonatomic)double progress;

@property (nonatomic)NSInteger showText UI_APPEARANCE_SELECTOR;
@property (nonatomic)NSInteger roundedHead UI_APPEARANCE_SELECTOR;
@property (nonatomic)NSInteger showShadow UI_APPEARANCE_SELECTOR;

@property (nonatomic)CGFloat thicknessRatio UI_APPEARANCE_SELECTOR;

/**
 *  设置内环和外环时使用
 */
@property (nonatomic,strong) UIColor *innerBackgroundColor UI_APPEARANCE_SELECTOR;
@property (nonatomic,strong) UIColor *outerBackgroundColor UI_APPEARANCE_SELECTOR;

@property (nonatomic,strong) UIFont *font UI_APPEARANCE_SELECTOR;

/**
 *  只有一种颜色时使用
 */
@property (nonatomic,strong) UIColor *progressFillColor UI_APPEARANCE_SELECTOR;

@property (nonatomic,strong) UIColor *progressTopGradientColor UI_APPEARANCE_SELECTOR;
@property (nonatomic,strong) UIColor *progressBottomGradientColor UI_APPEARANCE_SELECTOR;

@property (strong,nonatomic)NSArray *colorArray;       //多彩时使用
@property (strong,nonatomic)NSArray *shadeArray;       //每个颜色处于的位置
@property (nonatomic,readonly)CGFloat *back;

/**
 *  设置多彩圆环
 *
 *  @param colorArray 颜色数组
 *  @param shadeArray 每个颜色处于的位置
 */
-(void)setColorArray:(NSArray *)colorArray shadeArray:(NSArray *)shadeArray;
@end