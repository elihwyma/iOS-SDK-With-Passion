/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@class JTEffectFrame, NSString, PCMatrix44Double;

@interface JTEffectAnimationView : UIView

{
    _Bool _animationDidBegin;
    _Bool _animationDidEnd;
    JTEffectFrame *_effectFrame;
    JTEffectFrame *_toEffectFrame;
    PCMatrix44Double *_fromTransform;
    PCMatrix44Double *_toTransform;
    JTEffectFrame *_fromEffectFrame;
    CDUnknownBlockType _animationCompletedBlock;
}

@property (nonatomic) _Bool animationDidBegin;
@property (nonatomic) _Bool animationDidEnd;
@property (retain, nonatomic) JTEffectFrame *fromEffectFrame;
@property (retain, nonatomic) JTEffectFrame *toEffectFrame;
@property (retain, nonatomic) PCMatrix44Double *fromTransform;
@property (retain, nonatomic) PCMatrix44Double *toTransform;
@property (copy, nonatomic) CDUnknownBlockType animationCompletedBlock;
@property (nonatomic, readonly) JTEffectFrame *effectFrame;
@property (nonatomic, readonly) struct CATransform3D animatedTransform;
@property (nonatomic, readonly) double fractionComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithEffectFrame:(id)arg1 toEffectFrame:(id)arg2 fromTransform:(id)arg3 toTransform:(id)arg4;
- (void)animateTransform:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
