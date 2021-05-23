/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray;

@interface BWIrisDiscontinuity : NSObject

{
    CDStruct_1b6d18a9 _discontinuityTime;
    CDStruct_1b6d18a9 _duration;
    NSArray *_timeSkews;
    NSArray *_recipe;
    CDStruct_1b6d18a9 _targetFrameDuration;
    _Bool _onlyRetime;
}

@property (readonly) CDStruct_1b6d18a9 time;
@property (retain, nonatomic) NSArray *timeSkews;
@property (readonly) CDStruct_1b6d18a9 targetFrameDuration;

+ (int)maximumNumberOfConsecutiveDroppedFrames;

- (void)dealloc;
- (long long)_offsetIndexFromDiscontinuityForTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 targetFrameDuration:(CDStruct_1b6d18a9)arg3 onlyRetime:(_Bool)arg4 timeSkews:(id)arg5;
- (_Bool)containsVideoBufferTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldKeepBufferWithTime:(CDStruct_1b6d18a9)arg1 nextAdjustedTimeInOut:(CDStruct_1b6d18a9 *)arg2;

@end
