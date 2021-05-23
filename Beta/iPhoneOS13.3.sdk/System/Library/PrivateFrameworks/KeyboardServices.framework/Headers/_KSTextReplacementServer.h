/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

#import <KeyboardServices/Swift-Protocol.h>

@class APSConnection, NSString, NSXPCListener, _KSTRClient, _KSTextReplacementManager;

@protocol OS_dispatch_queue;

@interface _KSTextReplacementServer : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_workQueue;
    _KSTRClient *_daemonClient;
    _KSTextReplacementManager *_textReplacementManager;
    APSConnection *_pushConnection;
    NSXPCListener *_listener;
    NSString *_directoryPath;
}

@property (retain, nonatomic) APSConnection *pushConnection;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) _KSTextReplacementManager *textReplacementManager;
@property (copy, nonatomic) NSString *directoryPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isBlackListed:(unsigned int)arg1;
+ (id)textReplacementServer;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)cleanup;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)removeAllEntries;
- (void)shutdown;
- (void)reachabilityDidChange:(id)arg1;
- (_Bool)isSetupAssistantRunning;
- (void)_performCleanup;
- (void)runMigration;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)textReplacementEntries;
- (void)cancelPendingUpdates;
- (id)initWithDatabaseDirectoryPath:(id)arg1;
- (void)registerForPushNotifications;
- (void)scheduleSyncTask;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_cancelPendingUpdateForClient:(id)arg1;
- (id)textReplacementEntriesForClient:(id)arg1;
- (void)buddySetupDidFinish;

@end
