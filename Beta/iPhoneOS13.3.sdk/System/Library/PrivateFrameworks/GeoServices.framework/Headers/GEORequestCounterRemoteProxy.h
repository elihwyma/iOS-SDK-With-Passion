/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEORequestCounterRemoteProxy : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool countersEnabled;

- (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2;
- (void)readRequestsPerAppSince:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)readRequestLogsSince:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startPowerLogSessionWithName:(id)arg1;
- (void)clearCounters;
- (void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2;
- (void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 bytesDownloaded:(unsigned long long)arg7;
- (void)readProactiveTileDownloadsSince:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 at:(id)arg4;
- (void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)_incrementForApp:(id)arg1 requestId:(id)arg2 time:(id)arg3 requestType:(unsigned char)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7;

@end
