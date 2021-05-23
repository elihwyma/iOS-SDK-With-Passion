/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableSet, NSSet, NSString, NSUUID, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface UAUserActivityManager : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serverQ;
    _Bool _connectionInitializationSucceeded;
    NSMapTable *_userActivitiesByUUID;
    _Bool _supportsActivityContinuation;
    _Bool _activityContinuationIsEnabled;
    NSMutableSet *_userActivityUUIDsSendToServer;
    _Bool _registeredForAppResignationMessages;
    _Bool _needToSendInitialMessage;
    NSUUID *_activeUserActivityUUID;
    NSMapTable *_activeUserActivitiesByUUID;
}

@property (readonly) NSObject<OS_dispatch_queue> *serverQ;
@property (copy) NSUUID *activeUserActivityUUID;
@property (retain) NSMapTable *userActivitiesByUUID;
@property (retain) NSMapTable *activeUserActivitiesByUUID;
@property (copy, readonly) NSSet *userActivityUUIDsSendToServer;
@property _Bool needToSendInitialMessage;
@property _Bool registeredForAppResignationMessages;
@property (readonly) NSXPCConnection *connection;
@property (readonly) _Bool supportsActivityContinuation;
@property (readonly) _Bool activityContinuationIsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultManager;
+ (_Bool)userActivityContinuationSupported;
+ (id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)arg1 dynamicType:(id)arg2 kind:(unsigned long long)arg3 teamIdentifier:(id)arg4;
+ (_Bool)dontConnectToServer;
+ (_Bool)shouldSupportActivityContinuation;

- (id)init;
- (void)dealloc;
- (_Bool)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addDynamicUserActivity:(id)arg1 matching:(id)arg2;
- (void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2;
- (id)initWithConnection:(id)arg1;
- (id)activities;
- (void)connectionInterrupted;
- (id)fetchUUID:(id)arg1 intervalToWaitForDocumentSynchonization:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)removeUserActivity:(id)arg1;
- (_Bool)userActivityIsActive:(id)arg1;
- (void)markUserActivityAsDirty:(id)arg1 forceImmediate:(_Bool)arg2;
- (void)makeActive:(id)arg1;
- (void)makeInactive:(id)arg1;
- (void)pinUserActivity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)tellDaemonAboutNewLSUserActivity:(id)arg1;
- (void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(_Bool)arg2;
- (_Bool)determineIfUserActivityIsCurrent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)registerForApplicationDeactivateIfNecessary;
- (id)userActivityForUUID:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tellClientUserActivityItWasResumed:(id)arg1;
- (void)tellClientDebuggingEnabled:(_Bool)arg1 logFileHandle:(id)arg2;
- (void)sendInitialMessage:(_Bool)arg1;
- (id)activeActivitiesByPriority;
- (void)addUserActivity:(id)arg1;
- (void)sendToIndexerIfAppropriate:(id)arg1 force:(_Bool)arg2;
- (void)sendCurrentActivityToIndexer:(id)arg1;
- (void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
- (id)encodeUserActivity:(id)arg1;
- (id)createByDecodingUserActivity:(id)arg1;
- (_Bool)hasUserActivityWithUUID:(id)arg1;

@end
