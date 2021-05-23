/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface PUTileAnimationOptions : NSObject

{
    _Bool _shouldFadeOutSnapshotAfterCompletionGroup;
    _Bool _synchronizedWithTransition;
    long long _kind;
    double _delay;
    double _duration;
    double _springDampingRatio;
    double _springMass;
    double _springStiffness;
    long long _springNumberOfOscillations;
    CDUnknownBlockType _customViewAnimatorBlock;
    NSObject<OS_dispatch_group> *_completionGroup;
    struct PUDisplayVelocity _initialVelocity;
}

@property (nonatomic, getter=isSynchronizedWithTransition) _Bool synchronizedWithTransition;
@property (nonatomic) long long kind;
@property (nonatomic) double delay;
@property (nonatomic) double duration;
@property (nonatomic) double springDampingRatio;
@property (nonatomic) double springMass;
@property (nonatomic) double springStiffness;
@property (nonatomic) long long springNumberOfOscillations;
@property (nonatomic) struct PUDisplayVelocity initialVelocity;
@property (copy, nonatomic) CDUnknownBlockType customViewAnimatorBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup;
@property (nonatomic) _Bool shouldFadeOutSnapshotAfterCompletionGroup;

@end
