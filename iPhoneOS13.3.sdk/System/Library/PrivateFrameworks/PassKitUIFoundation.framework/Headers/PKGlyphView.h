//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUIFoundation/PKFingerprintGlyphViewDelegate-Protocol.h>

@class CALayer, LAUICheckmarkLayer, NSMutableArray, NSObject, NSString, PKFingerprintGlyphView, PKMicaLayer, PKPhoneGlyphLayer, UIColor;
@protocol OS_dispatch_group, PKGlyphViewDelegate;

@interface PKGlyphView : UIView <PKFingerprintGlyphViewDelegate>
{
    long long _style;
    BOOL _isPad;
    NSUInteger _transitionIndex;
    BOOL _transitioning;
    BOOL _transitioningAnimated;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    NSObject<OS_dispatch_group> *_lastAnimationGroup;
    double _lastAnimationWillFinish;
    BOOL _phoneWiggling;
    NSString *_phoneWiggleAnimationKey;
    struct {
        unsigned int showingPhone:1;
        unsigned int phoneRotated:1;
        unsigned int showingUserIntentPhone:1;
        unsigned int showingUserIntentArrow:1;
    } _layoutFlags;
    PKFingerprintGlyphView *_fingerprintView;
    PKPhoneGlyphLayer *_phoneLayer;
    LAUICheckmarkLayer *_checkLayer;
    CALayer *_userIntentLayer;
    PKMicaLayer *_userIntentArrowLayer;
    PKMicaLayer *_userIntentDeviceLayer;
    double _phoneAspectRatio;
    CALayer *_customImageLayer;
    UIColor _secondaryColor;
    UIColor _primaryHighlightColor;
    UIColor _intentPrimaryHighlightColor;
    UIColor _secondaryHighlightColor;
    unsigned int _userIntentEdge;
    long long _colorMode;
    UIColor *_primaryColor;
    CGImage _customImage;
    long long _state;
    id <PKGlyphViewDelegate> _delegate;
    UIEdgeInsets _customImageAlignmentEdgeInsets;
}

+ (void)invokeSuccessFeedback;
+ (id)sharedStaticResources;
+ (BOOL)automaticallyNotifiesObserversOfState;
@property(nonatomic) __weak id <PKGlyphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int userIntentEdge; // @synthesize userIntentEdge=_userIntentEdge;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) CGImage customImage; // @synthesize customImage=_customImage;
@property(readonly, nonatomic) UIEdgeInsets customImageAlignmentEdgeInsets; // @synthesize customImageAlignmentEdgeInsets=_customImageAlignmentEdgeInsets;
@property(readonly, copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, nonatomic) long long colorMode; // @synthesize colorMode=_colorMode;
// - (void).cxx_destruct;
- (void)fingerprintGlyphView:(id)arg1 didLayoutContentLayer:(id)arg2;
- (CGPoint)_phonePositionDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (CGPoint)_phonePositionWhileShownWithRotationPercentage:(double)arg1;
- (struct CATransform3D)_phoneTransformDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (id)createCustomImageLayer;
- (void)setCustomImage:(CGImage )arg1 withAlignmentEdgeInsets:(UIEdgeInsets)arg2;
@property(nonatomic) BOOL fadeOnRecognized;
- (void)setColorMode:(long long)arg1 animated:(BOOL)arg2;
- (void)_applyColorMode:(BOOL)arg1;
- (UIColor )_secondaryColorForStyle:(long long)arg1 mode:(long long)arg2;
- (UIColor )_primaryColorForStyle:(long long)arg1 mode:(long long)arg2;
- (void)_setSecondaryColor:(UIColor )arg1 animated:(BOOL)arg2;
- (void)_applyEffectivePrimaryColorToLayersAnimated:(BOOL)arg1;
- (void)_setPrimaryColor:(UIColor )arg1 animated:(BOOL)arg2;
- (void)_applyEffectiveHighlightColorsToLayersAnimated:(BOOL)arg1;
- (void)_setRecognizedIfNecessaryWithTransitionIndex:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_updateCheckViewStateAnimated:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_updateCustomImageLayerOpacityAnimated:(BOOL)arg1;
- (void)_updateUserIntentLayerRotation;
- (void)_updateUserIntentLayoutAnimated:(BOOL)arg1;
- (void)_endPhoneWiggle;
- (void)_startPhoneWiggle;
- (void)_updatePhoneWiggleIfNecessary;
- (void)_updatePhoneLayoutWithTransitionIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)_performTransitionWithTransitionIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)_finishTransitionForIndex:(NSUInteger)arg1;
- (void)_executeTransitionCompletionHandlers:(BOOL)arg1;
- (void)setState:(long long)arg1 animated:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_executeAfterMinimumAnimationDurationForStateTransitionWithDelayRatio:(double)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(id /* CDUnknownBlockType */)arg1;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)updateRasterizationScale:(double)arg1;
- (void)updateRotation;
- (void)tintColorDidChange;
- (void)_layoutContentLayer:(id)arg1;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

