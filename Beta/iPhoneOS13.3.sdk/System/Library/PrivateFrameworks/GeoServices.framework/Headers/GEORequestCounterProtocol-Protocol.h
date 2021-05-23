/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEORequestCounterProtocol <Swift>

@property (nonatomic) _Bool countersEnabled;

- (unsigned short)requestCounterTicketForType:appId: /* Error: Ran out of types for this method. */;
- (unsigned short)readRequestsPerAppSince:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)readRequestLogsSince:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)startPowerLogSessionWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCounters;
- (unsigned short)recordTrafficProbeCollectionAt:tripId:locationCount:result: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchTrafficProbeCollectionsStartingFrom:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)startedProactiveTileDownloadForIdentifier:policy: /* Error: Ran out of types for this method. */;
- (unsigned short)finishedProactiveTileDownloadForIdentifier:policy:tilesConsidered:tileDownloadAttempts:successes:failures:bytesDownloaded: /* Error: Ran out of types for this method. */;
- (unsigned short)readProactiveTileDownloadsSince:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)recordAnalyticsPersistCount:logMsgType:at: /* Error: Ran out of types for this method. */;
- (unsigned short)recordAnalyticsUploadSuccessCount:bytes:logMsgType:at: /* Error: Ran out of types for this method. */;
- (unsigned short)recordAnalyticsUploadFailureCount:logMsgType:at: /* Error: Ran out of types for this method. */;
- (unsigned short)recordAnalyticsDBExpireCount:logMsgType:at: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAnalyticsHandlingDataFrom:completion:completionQueue: /* Error: Ran out of types for this method. */;

@end
