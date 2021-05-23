/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIViewDeferredAnimation : NSObject

{
    _Bool _finalized;
    _Bool _autoreverses;
    NSString *_key;
    double _duration;
    id _initialValue;
    double _repeatCount;
}

@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (copy, nonatomic) NSString *key;
@property (nonatomic, readonly, getter=isFinalized) _Bool finalized;
@property (nonatomic) double duration;
@property (retain, nonatomic) id initialValue;
@property (nonatomic, readonly) NSArray *animationFrames;
@property (nonatomic) double repeatCount;
@property (nonatomic) _Bool autoreverses;

- (id)description;
- (void)animateFrameAtIndex:(long long)arg1 animations:(CDUnknownBlockType)arg2;
- (void)addAnimationFrameForValue:(id)arg1;
- (void)_finalize;
- (void)calculateFrameValues:(id)arg1 frameTimes:(id)arg2 withFrameInterval:(double)arg3 valueTransformer:(CDUnknownBlockType)arg4;
- (id)_animationFrames;
- (void)_enumerateAnimationFramesForKeyframes:(CDUnknownBlockType)arg1;

@end
