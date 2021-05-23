/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKSubscription.h>

@class CKRecordZoneID, NSString;

@interface CKRecordZoneSubscription : CKSubscription

@property (copy, nonatomic, readonly) CKRecordZoneID *zoneID;
@property (copy, nonatomic) NSString *recordType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2;

@end
