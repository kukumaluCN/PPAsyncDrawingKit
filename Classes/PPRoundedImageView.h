//
//  PPRoundedImageView.h
//  PPAsyncDrawingKit
//
//  Created by DSKcpp on 16/9/22.
//  Copyright © 2016年 DSKcpp. All rights reserved.
//

#import "PPUIControl.h"

@interface PPRoundedImageView : PPUIControl
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, assign) CGRect imageContentFrame;
@property (nonatomic, assign) BOOL isNeedChangeContentModel;
@property (nonatomic, assign) BOOL useUIImageView;
@property (nonatomic, assign) CGRect gradientColorRect;
@property (nonatomic, assign) BOOL updatePathWhenViewSizeChanges;
@property (nonatomic, strong) NSArray *gradientColors;
@property (nonatomic, strong) UIColor *fillColor;
@property (nonatomic, assign) BOOL showsBorderCornerRadius;
@property (nonatomic, strong) UIColor *borderColor;
@property (nonatomic, assign) CGFloat borderWidth;
@property (nonatomic, strong) UIColor *maskColor;
@property (nonatomic, assign) CGFloat cornerRadius;
@property (nonatomic, assign) NSUInteger roundedCorners;
@property (nonatomic, assign) BOOL showsCornerRadius;
@property (nonatomic, strong) CALayer *imageLayer;
@end
