/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDSClientDetailsProvider, NPSDomainAccessor, NPSManager, NSString;

@protocol DNDSAssertionSyncManagerDelegate, DNDSLegacyAssertionSyncManagerDataSource, OS_dispatch_queue;

@interface DNDSLegacyAssertionSyncManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NPSManager *_npsManager;
    NPSDomainAccessor *_accessor;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    id <DNDSLegacyAssertionSyncManagerDataSource> _dataSource;
    id <DNDSAssertionSyncManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <DNDSLegacyAssertionSyncManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <DNDSAssertionSyncManagerDelegate> delegate;

+ (void)cleanupState;

- (void)dealloc;
- (void)resume;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (void)_updateForReason:(unsigned long long)arg1;
- (void)_queue_updateToggleSyncForReason:(unsigned long long)arg1;
- (void)_queue_updateGizmoAssertionSyncWithModeAssertionUpdateContext:(id)arg1;
- (id)_queue_gizmoUpdateDate;
- (_Bool)_queue_updateCompanionToggleSyncForGizmoUpdateDate:(id)arg1 modeAssertionUpdateContext:(id)arg2;
- (void)_queue_updateGizmoToggleSyncForState:(id)arg1 companionUpdateDate:(id)arg2 reason:(unsigned long long)arg3;
- (void)_queue_updateCompanionAssertionMirroringForState:(id)arg1;
- (void)updateForStateUpdate:(id)arg1;
- (id)initWithClientDetailsProvider:(id)arg1 pairedDevice:(id)arg2;
- (void)_updateGizmoAssertionSync;

@end
