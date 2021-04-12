//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface PLCropOverlayPreviewBottomBar : UIView
{
    long long _backgroundStyle;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    UIButton *_playbackButton;
}

@property(readonly, nonatomic) UIButton *playbackButton; // @synthesize playbackButton=_playbackButton;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (void)_updateBackgroundStyle;
- (void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)_commonPLCropOverlayEditPhotoBottomBarInitialization;

@end

