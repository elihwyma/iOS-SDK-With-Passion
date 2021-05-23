/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSXPCListener;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CKDCloudDatabaseServer : NSObject

{
    int _tccToken;
    NSXPCListener *_xpcListener;
    NSMutableArray *_connectedClients;
    NSMutableDictionary *_recentClientsByProcessName;
    NSObject<OS_dispatch_source> *_sighandlerSource;
    NSOperationQueue *_clientTeardownQueue;
    unsigned long long _stateHandle;
    NSObject<OS_dispatch_source> *_statusReportRequestSource;
    NSObject<OS_dispatch_queue> *_statusReportQueue;
    NSObject<OS_dispatch_queue> *_statusReportCallbackQueue;
    NSMutableArray *_statusReportCallbacks;
}

@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMutableArray *connectedClients;
@property (retain, nonatomic) NSMutableDictionary *recentClientsByProcessName;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sighandlerSource;
@property (retain, nonatomic) NSOperationQueue *clientTeardownQueue;
@property (nonatomic) unsigned long long stateHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *statusReportRequestSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusReportQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusReportCallbackQueue;
@property (retain, nonatomic) NSMutableArray *statusReportCallbacks;
@property (nonatomic) int tccToken;
@property (nonatomic, readonly) _Bool isInSyncBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedServer;

- (id)init;
- (void)dealloc;
- (void)resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)willSwitchUser;
- (void)uploadContent;
- (id)CKStatusReportArray;
- (void)_dumpStatusReportToFileHandle:(id)arg1;
- (void)statusReportWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cleanRecentClients;
- (void)_dumpStatusReportArrayToOsTrace:(id)arg1;
- (void)kickOffPendingLongLivedOperations;
- (void)dumpStatusReportToFileHandle:(id)arg1;

@end
