/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIView, _UIVisualEffectViewBackdropCaptureGroup;

@protocol _UIVisualEffectViewParticipating;

@protocol _UIVisualEffectViewParticipating <Swift>

@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property (copy, nonatomic) NSArray *viewEffects;
@property (copy, nonatomic) NSArray *filters;

- (unsigned short)applyRequestedFilterEffects;
- (unsigned short)applyIdentityFilterEffects;
- (unsigned short)applyIdentityViewEffects;
- (unsigned short)applyRequestedViewEffects;

@end
