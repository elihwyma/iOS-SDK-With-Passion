/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class CMMotionActivityManager, NSOperationQueue, _PASLock;

@interface _ATXMotionManagerWrapper : NSObject

{
    CMMotionActivityManager *_motionActivityManager;
    NSOperationQueue *_motionActivityQueue;
    _PASLock *_currentMotion;
}

+ (id)sharedInstance;
+ (_Bool)hasMotionActivity;

- (id)init;
- (id)_fetchMotionActivities;
- (void)updateCurrentActivity:(id)arg1;
- (id)getCurrentActivity;

@end
