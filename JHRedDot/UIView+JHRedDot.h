//
//  UIView+JHRedDot.h
//  JHKit
//
//  Created by HaoCold on 2017/12/18.
//  Copyright © 2017年 HaoCold. All rights reserved.
//
//  MIT License
//
//  Copyright (c) 2017 xjh093
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <UIKit/UIKit.h>

@class JHRedDot,JHRedDotConfig;

@interface UIView (JHRedDot)
@property (nonatomic,  strong) JHRedDot *jh_redDot;
@end

@interface JHRedDot : UIView
+ (instancetype)defaultDot;
+ (instancetype)redDotWithConfig:(JHRedDotConfig *)config;
@end

@interface JHRedDotConfig : NSObject

/** Size of red dot. */
@property (nonatomic,  assign) CGSize  size;

/** Radius of red dot. */
@property (nonatomic,  assign) CGFloat  radius;

/** Default is 'redColor'. */
@property (nonatomic,  strong) UIColor *color;

/** Right space in superview. */
@property (nonatomic,  assign) CGFloat  offsetX;

/** Top space in superview. */
@property (nonatomic,  assign) CGFloat  offsetY;

@end


