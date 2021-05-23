/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOABAssignmentRequest, GEOABAssignmentResponse, GEOXPCActivity, NSString;

@protocol GEOExperimentServerProxyDelegate;

@interface GEOExperimentServerLocalProxy : NSObject

{
    id <GEOExperimentServerProxyDelegate> _delegate;
    GEOABAssignmentResponse *_experimentsInfo;
    struct os_unfair_lock_s _experimentsInfoLock;
    GEOABAssignmentRequest *_currentRequest;
    struct os_unfair_lock_s _currentRequestLock;
    GEOXPCActivity *_activity;
    unsigned long long _stateCaptureHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <GEOExperimentServerProxyDelegate> delegate;
@property (nonatomic, readonly) GEOABAssignmentResponse *experimentsInfo;

+ (void)cancelOldActivities;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)forceUpdate;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (void)abAssignUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshDatasetABStatus:(id)arg1;
- (void)abAssignUUIDWithSyncCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_fetchAllAvailableExperiments:(CDUnknownBlockType)arg1;
- (_Bool)_removeOldExperimentsInfoIfNecessary:(_Bool)arg1;
- (void)_setupRefreshActivity;
- (void)_updateIfNecessary;
- (void)_writeExperimentInfoToDisk:(id)arg1;
- (void)_executeRefreshWithinTime:(double)arg1;
- (void)_notifyExperimentsInfoChanged:(id)arg1 current:(id)arg2;
- (void)_loadExperimentsConfiguration:(CDUnknownBlockType)arg1;
- (void)_deleteExperimentInfoFromDisk;

@end
