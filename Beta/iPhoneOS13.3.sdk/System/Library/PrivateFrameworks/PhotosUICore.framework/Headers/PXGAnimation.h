/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, PXGLayout, PXGTransition;

@protocol PXGAnimationDelegate;

@interface PXGAnimation : NSObject

{
    _Bool _supportsSpriteTransfer;
    _Bool _isDoubleSided;
    _Bool _supportsPresentationAdjustment;
    float _dampingRatio;
    double _duration;
    long long _curve;
    long long _numberOfOscillations;
    double _maximumDistance;
    id <PXGAnimationDelegate> _delegate;
    NSDictionary *_userData;
    PXGLayout *_layout;
    PXGTransition *_transition;
}

@property (weak, nonatomic, readonly) PXGLayout *layout;
@property (nonatomic, readonly) double effectiveDuration;
@property (weak, nonatomic) PXGTransition *transition;
@property (nonatomic) double duration;
@property (nonatomic) long long curve;
@property (nonatomic) float dampingRatio;
@property (nonatomic) long long numberOfOscillations;
@property (nonatomic) double maximumDistance;
@property (nonatomic) _Bool supportsSpriteTransfer;
@property (nonatomic, setter=setDoubleSided:) _Bool isDoubleSided;
@property (nonatomic) _Bool supportsPresentationAdjustment;
@property (retain, nonatomic) id <PXGAnimationDelegate> delegate;
@property (retain, nonatomic) NSDictionary *userData;

- (id)init;
- (id)description;
- (id)initWithLayout:(id)arg1;
- (void)noteDidComplete;

@end
