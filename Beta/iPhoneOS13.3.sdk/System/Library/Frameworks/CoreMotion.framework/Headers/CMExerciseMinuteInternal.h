/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMExerciseMinuteData;

@protocol OS_dispatch_queue;

@interface CMExerciseMinuteInternal : NSObject

{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    _Bool fStartedUpdates;
    CMExerciseMinuteData *fMostRecentRecord;
    CDUnknownBlockType fHandler;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_queryExerciseMinutesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_stopUpdates;

@end
