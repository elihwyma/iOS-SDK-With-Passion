//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface HUQuickControlMagnifierView : UIView
{
    double _innerRadius;
}

@property(nonatomic) double innerRadius; // @synthesize innerRadius=_innerRadius;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(retain, nonatomic) UIColor *selectedColor;
- (double)_outlineWidth;
- (id)initWithFrame:(CGRect)arg1;

@end

