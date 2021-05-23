/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMExerciseMinuteInternal;

@interface CMExerciseMinute : NSObject

{
    CMExerciseMinuteInternal *_internal;
}

@property (nonatomic, readonly) CMExerciseMinuteInternal *_internal;

+ (id)maxExerciseMinuteDataEntries;
+ (_Bool)isExerciseMinuteAvailable;

- (id)init;
- (void)dealloc;
- (void)startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopUpdates;
- (void)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)queryExerciseMinutesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
