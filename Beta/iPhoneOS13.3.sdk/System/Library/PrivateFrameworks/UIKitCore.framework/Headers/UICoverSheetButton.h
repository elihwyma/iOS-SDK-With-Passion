/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class NSArray, NSString, UIColor, UIImage, UIImageView, UIView, UIVisualEffectView, _UIClickInteraction;

@interface UICoverSheetButton : UIControl

{
    UIView *_containerView;
    UIImageView *_contentView;
    UIVisualEffectView *_backgroundEffectView;
    NSArray *_backgroundEffects;
    NSArray *_selectedBackgroundEffects;
    UIView *_backgroundHighlightView;
    _UIClickInteraction *_clickInteraction;
    _Bool _interactive;
    _Bool _didActivateDuringInteraction;
    double _maxForceDuringInteraction;
    double _highlightProgress;
    _Bool _pronounced;
    _Bool _latching;
    UIImage *_image;
    UIImage *_selectedImage;
    UIColor *_selectedTintColor;
    NSString *_localizedAccessoryTitle;
    NSString *_backgroundEffectViewGroupName;
    NSString *_statisticsIdentifier;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic, getter=isPronounced) _Bool pronounced;
@property (nonatomic, getter=isLatching) _Bool latching;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIColor *selectedTintColor;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (copy, nonatomic) NSString *localizedAccessoryTitle;
@property (copy, nonatomic) NSString *backgroundEffectViewGroupName;
@property (copy, nonatomic) NSString *statisticsIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)clickInteractionDidClickUp:(id)arg1;
- (_Bool)clickInteractionShouldBegin:(id)arg1;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (unsigned long long)_clickInteractionDefaultDriverType:(id)arg1;
- (id)_backgroundEffectsWithBrightness:(double)arg1;
- (void)layoutIfNeededAnimated;
- (void)_animateEffectUpdateWithProgress:(double)arg1 ended:(_Bool)arg2;
- (id)_interactionDurationStat;
- (id)_firstActivationDurationStat;
- (id)_interactionCountStatWithActivation:(_Bool)arg1;
- (id)_maxForceStatWithActivation:(_Bool)arg1;
- (void)clickInteraction:(id)arg1 didObserveForce:(double)arg2;

@end
