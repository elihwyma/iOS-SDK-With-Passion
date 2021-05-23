/*
 Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

#import <AdCore/DSIDRecord.h>

@class NSString;

@interface DSIDRecord (Private)

@property (retain, nonatomic) NSString *iCloudDSID;
@property (nonatomic) _Bool accountIsT13;
@property (nonatomic) _Bool accountIsU13;
@property (nonatomic) _Bool accountIsU18;
@property (nonatomic) _Bool accountAgeUnknown;
@property (nonatomic) _Bool isDPIDManatee;
@property (nonatomic) int limitAdTrackingTimestamp;
@property (retain, nonatomic) NSString *segmentData;
@property (nonatomic) int segmentDataTimestamp;
@property (nonatomic) int lastSentSegmentDataTimestamp;
@property (nonatomic) int lastSegmentServedTimestamp;
@property (retain, nonatomic) NSString *IDFA;
@property (retain, nonatomic) NSString *iAdIDBeforeReset;

- (_Bool)isEqual:(id)arg1;
- (void)removeIDForClientType:(long long)arg1;
- (_Bool)hasIDForClientType:(long long)arg1;
- (void)resetiAdIDs;
- (void)updateDeviceLATStatusWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendLATStatusToAdPlatforms:(CDUnknownBlockType)arg1;
- (void)sendSegmentDataToAdPlatforms:(CDUnknownBlockType)arg1;
- (void)reconcileIDFAandLAT;
- (void)sendSegmentsAndLATToAdPlatformsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetiAdIDsAndDPID:(CDUnknownBlockType)arg1;
- (void)ensureiAdIDs;
- (_Bool)isActiveRecord;
- (void)retrieveSegmentDataFromiTunes:(CDUnknownBlockType)arg1;
- (void)setLimitAdTrackingStatus:(_Bool)arg1 timestamp:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleIDFAReset:(CDUnknownBlockType)arg1;
- (_Bool)LATStatusChangeInProgress;

@end
