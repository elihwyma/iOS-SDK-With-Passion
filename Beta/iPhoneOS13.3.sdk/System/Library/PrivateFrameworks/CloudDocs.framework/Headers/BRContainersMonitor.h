/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface BRContainersMonitor : NSObject

{
    NSMutableDictionary *_observersByContainerID;
    NSMutableDictionary *_notifyTokenByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)containerIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
+ (_Bool)isContainerID:(id)arg1;
+ (id)bundleIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
+ (_Bool)isContainerIDForeground:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1 forContainerID:(id)arg2;
- (void)removeObserver:(id)arg1 forContainerID:(id)arg2;

@end
