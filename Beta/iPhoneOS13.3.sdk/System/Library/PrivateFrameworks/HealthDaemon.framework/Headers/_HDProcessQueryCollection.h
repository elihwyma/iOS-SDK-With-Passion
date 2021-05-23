/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDQueryServerClientState, NSArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HDProcessQueryCollection : NSObject

{
    NSMutableDictionary *_queryServersByUUID;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_processBundleIdentifier;
    HDQueryServerClientState *_clientState;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) NSString *processBundleIdentifier;
@property (copy, nonatomic, readonly) NSArray *queryServers;
@property (nonatomic, readonly) _Bool hasQueryServers;
@property (copy, nonatomic) HDQueryServerClientState *clientState;

- (void)addQueryServer:(id)arg1;
- (void)removeQueryServer:(id)arg1;
- (id)initWithProcessBundleIdentifier:(id)arg1;
- (void)queue_startStateChangeTimerWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)queue_cancelStateChangeTimer;

@end
