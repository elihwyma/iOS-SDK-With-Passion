/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface VTTriggerEventMonitorManager : NSObject

{
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;

- (id)init;
- (void)addConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)notifyVoiceTrigger;
- (void)notifyEarlyDetect;

@end
