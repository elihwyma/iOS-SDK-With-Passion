/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL, NSXPCListener, WBSHistoryDatabaseAccessBroker, WBSHistoryURLCompletionDataStore;

@protocol OS_dispatch_queue;

@interface WBSHistoryService : NSObject

{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_historyServiceQueue;
    NSDate *_initDate;
    WBSHistoryDatabaseAccessBroker *_databaseAccessBroker;
    WBSHistoryURLCompletionDataStore *_urlCompletionDataStore;
}

@property (nonatomic, readonly) WBSHistoryDatabaseAccessBroker *databaseAccessBroker;
@property (nonatomic, readonly) WBSHistoryURLCompletionDataStore *urlCompletionDataStore;
@property (nonatomic, readonly) NSURL *databaseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_shutdown;
- (_Bool)_connectionIsEntitledToUseUserDatabase:(id)arg1;

@end
