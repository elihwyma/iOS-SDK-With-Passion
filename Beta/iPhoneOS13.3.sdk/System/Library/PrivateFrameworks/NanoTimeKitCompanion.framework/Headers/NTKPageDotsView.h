/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, NSMutableArray, UIColor;

@interface NTKPageDotsView : UIView

{
    unsigned long long _numberOfPages;
    unsigned long long _currentPage;
    UIColor *_currentPageColor;
    UIColor *_otherPageColor;
    double _dotDiameter;
    double _dotPadding;
    CLKDevice *_device;
    NSMutableArray *_pageDots;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (retain, nonatomic) NSMutableArray *pageDots;
@property (nonatomic) unsigned long long numberOfPages;
@property (nonatomic) unsigned long long currentPage;
@property (retain, nonatomic) UIColor *currentPageColor;
@property (retain, nonatomic) UIColor *otherPageColor;
@property (nonatomic) double dotDiameter;
@property (nonatomic) double dotPadding;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initForDevice:(id)arg1;
- (void)applyDefaultConfiguration;
- (id)makePageDot;
- (void)_regenerateDots;

@end
