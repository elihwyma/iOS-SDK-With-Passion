/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOBatchOpportunisticTileDownloader, GEODataSaverTileLoaderManager, GEOPowerAssertion, GEORequestCounter, GEOResourceManifestManager, GEOStaleTileUpdater, GEOTileDB, GEOXPCActivity, NSDictionary, NSMutableArray, NSString;

@protocol GEOProactiveTileDownloaderDelegate, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GEOProactiveTileDownloader : NSObject

{
    NSString *_uniqueIdentifier;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    id <GEOProactiveTileDownloaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    GEOTileDB *_diskCache;
    NSString *_startCountry;
    NSString *_startRegion;
    GEODataSaverTileLoaderManager *_dataSaverManager;
    GEOResourceManifestManager *_manifestManager;
    GEORequestCounter *_requestCounter;
    struct GEOOnce_s _didStart;
    struct GEOOnce_s _didFinish;
    NSDictionary *_testDownloaders;
    NSMutableArray *_remainingPolicies;
    GEOStaleTileUpdater *_staleUpdater;
    unsigned long long _currentPolicy;
    GEOBatchOpportunisticTileDownloader *_currentDownloader;
    _Bool _policyEnabled[1];
    GEOPowerAssertion *_powerAssertion;
    GEOXPCActivity *_activity;
    NSObject<OS_dispatch_source> *_deferCheckinTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)usesDiscretionaryDownloads;
+ (_Bool)_canUseXPCActivity;
+ (unsigned long long)maximumDownloadBatchSize;
+ (_Bool)shouldDownloadTileType:(int)arg1;

- (id)init;
- (void)cancel;
- (void)start;
- (void)_start;
- (void)_finish;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3 dataSaverManager:(id)arg4 manifestManager:(id)arg5 requestCounter:(id)arg6 downloaders:(id)arg7;
- (void)_pauseIfNecessary;
- (void)_clearXPCDeferralTimer;
- (void)_clearPowerAssertion;
- (void)_xpcActivityFired;
- (void)_takePowerAssertionIfNecessary;
- (void)_registerXPCDeferralTimer;
- (void)_startNextDownloader;
- (void)_registerXPCActivity;
- (void)batchOpportunisticTileDownloader:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;
- (void)batchOpportunisticTileDownloader:(id)arg1 failedToLoadKey:(struct _GEOTileKey)arg2 error:(id)arg3;
- (void)batchOpportunisticTileDownloaderDidFinish:(id)arg1;

@end
