/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOTileRequester.h>

@class GEODataSession, GEOTileKeyMap, GEOTileRequestBalancer, NSMutableArray, NSObject, NSString, geo_isolater;

@protocol OS_dispatch_queue, OS_os_activity, OS_voucher;

@interface GEOSimpleTileRequester : GEOTileRequester

{
    GEOTileRequestBalancer *_balancer;
    NSMutableArray *_running;
    NSMutableArray *_errors;
    NSObject<OS_os_activity> *_activity;
    NSObject<OS_voucher> *_voucher;
    GEODataSession *_dataSession;
    unsigned int _qos;
    struct GEOOnce_s _didStart;
    struct GEOOnce_s _didCallDelegate;
    _Bool _cancelled;
    _Bool _subclassImplementsTileEdition;
    _Bool _hasRemainingTileKeys;
    GEOTileKeyMap *_signpostIDs;
    GEOTileKeyMap *_tileLoaderCreateTimes;
    unsigned int _highestRunningOperationPriority;
    geo_isolater *_highestRunningOperationPriorityIsolation;
    _Bool _includeReasonHeader;
    _Bool _allowTLSSessionTicketUse;
    _Bool _allowTCPFastOpen;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) GEOTileRequestBalancer *balancer;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly) unsigned int highestRunningOperationPriority;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)_cleanup;
- (void)_cancel;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 dataSession:(id)arg4;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;
- (void)_updateRunningCountAndCheckIfDone;
- (void)_updateHighestRunningPriority;
- (void)_checkIfDone;
- (void)_notifyDelegateDone:(CDUnknownBlockType)arg1;
- (void)createRequest:(id *)arg1 localizationRequest:(id *)arg2 forKey:(const struct _GEOTileKey *)arg3;
- (id)editionHeader;
- (_Bool)downloadsDataToDisk;
- (_Bool)_useProxyAuthForTileKey:(const struct _GEOTileKey *)arg1;
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;
- (id)newRequestWithKind:(CDStruct_d1a7ebee)arg1 URL:(id)arg2 useProxyAuth:(_Bool)arg3 entityTag:(id)arg4 cachedData:(id)arg5 timeout:(double)arg6 requestCounterTicket:(id)arg7;
- (id)localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)allowsCookies;
- (void)_cancelAllRunningOperations;
- (void)_generateEndSignpostEventIfNecessary:(struct _GEOTileKey)arg1;
- (void)_cancelKey:(struct _GEOTileKey)arg1;
- (id)removeOperationsForKey:(const struct _GEOTileKey *)arg1;
- (void)_reprioritizeKey:(struct _GEOTileKey)arg1 newPriority:(unsigned int)arg2;
- (id)operationsForKey:(const struct _GEOTileKey *)arg1;
- (void)_didStartOperationsForAllTileKeys;
- (id)_createOperationsForTileKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2;
- (void)finishedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(id)arg2;
- (void)failedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3;
- (void)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)_addRunningOperation:(id)arg1;
- (_Bool)_removeRunningOperation:(id)arg1;
- (_Bool)_isRunningOperation:(id)arg1;
- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1;
- (void)createAndStartOperationsForTileKeys:(id)arg1;
- (unsigned long long)estimatedNumberOfOperationsForTileKey:(struct _GEOTileKey)arg1;
- (void)didStartOperationsForAllTileKeys;
- (_Bool)shouldParticipateInBalancerScheduling;
- (id)newXPCDataRequestForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;
- (id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;
- (id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
- (int)checksumMethodForIncomingTileDataWithKey:(struct _GEOTileKey *)arg1;
- (_Bool)shouldAllowEmptyDataForTileKey:(const struct _GEOTileKey *)arg1;
- (void)_operationFinished:(id)arg1;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)operationFailed:(id)arg1 error:(id)arg2;
- (id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;

@end
