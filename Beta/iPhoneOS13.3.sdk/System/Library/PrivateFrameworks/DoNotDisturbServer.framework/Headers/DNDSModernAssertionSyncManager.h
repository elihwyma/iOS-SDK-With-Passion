/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDSClientDetailsProvider, NSDate, NSString;

@protocol DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSSyncService, OS_dispatch_queue;

@interface DNDSModernAssertionSyncManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <DNDSSyncService> _syncService;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    NSDate *_lastReceivedStoreDate;
    NSDate *_lastSentStoreDate;
    id <DNDSAssertionSyncManagerDataSource> _dataSource;
    id <DNDSAssertionSyncManagerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <DNDSAssertionSyncManagerDataSource> dataSource;
@property (weak, nonatomic) id <DNDSAssertionSyncManagerDelegate> delegate;

- (void)resume;
- (void)updateForModeAssertionUpdateResult:(id)arg1;
- (void)_queue_sendStateSnapshotToPairedDevice:(id)arg1 force:(_Bool)arg2;
- (void)_queue_handleMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2;
- (void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4;
- (_Bool)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4;
- (id)initWithClientDetailsProvider:(id)arg1 syncService:(id)arg2;

@end
