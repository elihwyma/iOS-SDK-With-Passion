/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, PSSSSubscriptionManagerInternal;

@protocol OS_dispatch_queue;

@interface WLKAppLibraryCore : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    PSSSSubscriptionManagerInternal *_subscriptionManager;
}

+ (id)sharedInstance;

- (id)init;
- (id)_connection;
- (void)_fetchApplicationsInProcess:(CDUnknownBlockType)arg1;
- (void)fetchApplications:(CDUnknownBlockType)arg1;

@end
