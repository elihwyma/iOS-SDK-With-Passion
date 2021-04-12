//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>


@class LPCaptionBarAccessoryView, LPCaptionBarPresentationProperties, LPCaptionBarStyle, LPInlineMediaPlaybackInformation, LPPlayButtonView, LPVerticalTextStackView;
@protocol LPTextStyleable;

__attribute__((visibility("hidden")))
@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate>
{
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
    LPComponentView *_leftIconView;
    LPComponentView *_rightIconView;
    LPPlayButtonView *_playButton;
    LPCaptionBarAccessoryView *_leftAccessoryView;
    LPCaptionBarAccessoryView *_rightAccessoryView;
    LPComponentView<LPTextStyleable> *_aboveTopCaptionView;
    LPComponentView<LPTextStyleable> *_topCaptionView;
    LPComponentView<LPTextStyleable> *_bottomCaptionView;
    LPComponentView<LPTextStyleable> *_belowBottomCaptionView;
    LPVerticalTextStackView *_textStackView;
    LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;
    BOOL _hasEverBuilt;
    BOOL _useProgressSpinner;
    UIEdgeInsets _textSafeAreaInset;
}

@property(nonatomic) UIEdgeInsets textSafeAreaInset; // @synthesize textSafeAreaInset=_textSafeAreaInset;
@property(nonatomic) BOOL useProgressSpinner; // @synthesize useProgressSpinner=_useProgressSpinner;
// - (void).cxx_destruct;
- (void)_buildViewsForCaptionBarIfNeeded;
- (CGSize)_layoutCaptionBarForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutComponentView;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animateInWithBaseAnimation:(id)arg1 currentTime:(double)arg2;
- (void)animateOut;
- (void)setPlaybackInformation:(id)arg1;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2;
- (id)init;

@end

