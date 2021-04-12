//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HULayeredBackgroundEffect, HULayeredContentEffect, UIVisualEffectView;

@interface HULayeredVisualEffectView : UIView
{
    HULayeredContentEffect *_contentEffect;
    HULayeredBackgroundEffect *_backgroundEffect;
    double _cornerRadius;
    UIVisualEffectView *_contentEffectView;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_backgroundFillView;
}

@property(retain, nonatomic) UIView *backgroundFillView; // @synthesize backgroundFillView=_backgroundFillView;
@property(retain, nonatomic) UIVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property(retain, nonatomic) UIVisualEffectView *contentEffectView; // @synthesize contentEffectView=_contentEffectView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) HULayeredBackgroundEffect *backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
@property(retain, nonatomic) HULayeredContentEffect *contentEffect; // @synthesize contentEffect=_contentEffect;
// - (void).cxx_destruct;
- (void)_applyCornerRadius;
- (void)_updateSubviewOrder;
- (void)_updateBackgroundEffects;
- (void)_updateContentEffects;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
@property(readonly, nonatomic) UIView *contentView;
- (id)initWithContentEffect:(id)arg1 backgroundEffect:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

