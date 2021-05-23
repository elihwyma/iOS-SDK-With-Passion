/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCCKPrivateDatabase, FCCKRecordZone, FCCKRecordZoneManager, NSString;

@protocol FCAppActivityMonitor;

@interface FCPrivateDataContextInternal : NSObject

{
    FCCKPrivateDatabase *_privateDatabase;
    id <FCAppActivityMonitor> _appActivityMonitor;
    FCCKRecordZoneManager *_recordZoneManager;
}

@property (retain, nonatomic) FCCKPrivateDatabase *privateDatabase;
@property (retain, nonatomic) id <FCAppActivityMonitor> appActivityMonitor;
@property (retain, nonatomic) FCCKRecordZoneManager *recordZoneManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) FCCKRecordZone *issueReadingHistoryRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *readingListRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *subscriptionsRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *sensitiveSubscriptionsRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *readingHistoryRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *channelMembershipsRecordZone;
@property (nonatomic, readonly) FCCKRecordZone *userInfoRecordZone;

- (id)init;
- (id)recordZoneWithName:(id)arg1;
- (void)prepareRecordZonesForUseWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
