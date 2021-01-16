//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CLKDevice, NSMutableArray, UIColor;

@interface NTKPageDotsView : UIView
{
    NSUInteger _numberOfPages;
    NSUInteger _currentPage;
    UIColor *_currentPageColor;
    UIColor *_otherPageColor;
    double _dotDiameter;
    double _dotPadding;
    CLKDevice *_device;
    NSMutableArray *_pageDots;
}

@property(retain, nonatomic) NSMutableArray *pageDots; // @synthesize pageDots=_pageDots;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) double dotPadding; // @synthesize dotPadding=_dotPadding;
@property(nonatomic) double dotDiameter; // @synthesize dotDiameter=_dotDiameter;
@property(retain, nonatomic) UIColor *otherPageColor; // @synthesize otherPageColor=_otherPageColor;
@property(retain, nonatomic) UIColor *currentPageColor; // @synthesize currentPageColor=_currentPageColor;
@property(nonatomic) NSUInteger currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) NSUInteger numberOfPages; // @synthesize numberOfPages=_numberOfPages;
// - (void).cxx_destruct;
- (void)_regenerateDots;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)applyDefaultConfiguration;
- (id)makePageDot;
- (id)initForDevice:(id)arg1;

@end
