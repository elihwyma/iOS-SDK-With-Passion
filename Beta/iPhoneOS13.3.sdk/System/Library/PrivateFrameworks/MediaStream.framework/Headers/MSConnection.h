/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface MSConnection : NSObject

{
    NSXPCConnection *_center;
    NSXPCConnection *_noWakeCenter;
    NSMutableDictionary *_serverSideConfig;
    NSObject<OS_dispatch_queue> *_serverSideConfigQueue;
    int _serverSideConfigNotificationToken;
}

+ (id)sharedConnection;

- (id)init;
- (void)dealloc;
- (id)pause;
- (_Bool)isBusy;
- (void)deleteAssetCollections:(id)arg1 personID:(id)arg2;
- (void)resume:(id)arg1;
- (void)resetServerStateForPersonID:(id)arg1;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (_Bool)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id *)arg3;
- (_Bool)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id *)arg3;
- (void)forgetPersonID:(id)arg1;
- (void)isBusyCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_waitForMessageToBeSent;
- (void)checkForOutstandingActivities;
- (void)handleSubscriptionPushForPersonID:(id)arg1;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (void)abortActivitiesForPersonID:(id)arg1;
- (id)_machErrorWithUnderlyingError:(id)arg1;

@end
