/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@class LPCaptionBarAccessoryView, LPCaptionBarPresentationProperties, LPCaptionBarStyle, LPComponentView, LPInlineMediaPlaybackInformation, LPPlayButtonView, LPVerticalTextStackView, NSString;

@protocol LPTextStyleable;

__attribute__((visibility("hidden")))
@interface LPCaptionBarView

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
    _Bool _hasEverBuilt;
    _Bool _useProgressSpinner;
    struct UIEdgeInsets _textSafeAreaInset;
}

@property (nonatomic) _Bool useProgressSpinner;
@property (nonatomic) struct UIEdgeInsets textSafeAreaInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)layoutComponentView;
- (void)animateOut;
- (void)animateInWithBaseAnimation:(id)arg1 currentTime:(double)arg2;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2;
- (void)setPlaybackInformation:(id)arg1;
- (void)_buildViewsForCaptionBarIfNeeded;
- (struct CGSize)_layoutCaptionBarForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;

@end
