/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOABAssignmentResponse, NSString;

@protocol GEOExperimentServerProxyDelegate;

@interface GEOExperimentServerRemoteProxy : NSObject

{
    id <GEOExperimentServerProxyDelegate> _delegate;
    GEOABAssignmentResponse *_experimentsInfo;
    struct os_unfair_lock_s _experimentsInfoLock;
    int _experimentsChangedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <GEOExperimentServerProxyDelegate> delegate;
@property (nonatomic, readonly) GEOABAssignmentResponse *experimentsInfo;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)forceUpdate;
- (void)abAssignUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshDatasetABStatus:(id)arg1;
- (void)abAssignUUIDWithSyncCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_fetchAllAvailableExperiments:(CDUnknownBlockType)arg1;

@end
