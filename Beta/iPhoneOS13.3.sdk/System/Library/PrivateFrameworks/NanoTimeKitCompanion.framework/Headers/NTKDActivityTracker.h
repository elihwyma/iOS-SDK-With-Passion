/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NTKDActivityTracker : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activityIdentifiers;
    NSObject<OS_dispatch_source> *_adjustCriteriaTimer;
    NSObject<OS_dispatch_source> *_removePostWakeActivityTimer;
    _Bool _xpcActivityRegistered;
}

+ (id)sharedInstance;

- (id)init;
- (void)endActivity:(id)arg1;
- (void)checkin;
- (void)beginActivity:(id)arg1;
- (void)_queue_beginActivity:(id)arg1;
- (void)_queue_endActivity:(id)arg1;
- (void)_queue_setOrUpdateActivityAndTimer;

@end
