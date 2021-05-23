/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCCKPrivateDatabase, FCCKRecordZone;

@protocol FCAppActivityMonitor;

@protocol FCPrivateDataContextInternal <Swift>

@property (nonatomic, readonly) FCCKPrivateDatabase *privateDatabase;
@property (nonatomic, readonly) id <FCAppActivityMonitor> appActivityMonitor;
@property (nonatomic, readonly) FCCKRecordZone *issueReadingHistoryRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *readingListRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *subscriptionsRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *sensitiveSubscriptionsRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *readingHistoryRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *channelMembershipsRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *userInfoRecordZone;

- (unsigned short)recordZoneWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareRecordZonesForUseWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
