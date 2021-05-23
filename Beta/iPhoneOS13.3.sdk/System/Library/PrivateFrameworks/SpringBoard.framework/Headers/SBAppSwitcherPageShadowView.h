/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardFoundation/SBFView.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAppSwitcherSettings, SBMedusaSettings, UIView;

@interface SBAppSwitcherPageShadowView : SBFView <Swift>

{
    SBAppSwitcherSettings *_switcherSettings;
    SBMedusaSettings *_medusaSettings;
    SBFView *_diffuseShadowView;
    SBFView *_rimShadowView;
    double _diffuseShadowRadius;
    double _diffuseShadowOpacity;
    struct CGSize _diffuseShadowOffset;
    double _rimShadowRadius;
    double _rimShadowOpacity;
    double _highlightedDiffuseShadowRadius;
    double _highlightedDiffuseShadowOpacity;
    struct CGSize _highlightedDiffuseShadowOffset;
    _Bool _highlighted;
    double _switcherCardScale;
    long long _style;
    double _shadowOffset;
}

@property (nonatomic, readonly) UIView *_diffuseShadowView;
@property (nonatomic, readonly) UIView *_rimShadowView;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) double switcherCardScale;
@property (nonatomic) long long style;
@property (nonatomic) double shadowOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)_updateShadowViews;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_applyPrototypeSettingsToConstants;
- (void)_updateShadowParameters;

@end
