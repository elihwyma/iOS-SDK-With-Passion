/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKSubscription.h>

@class CKRecordZoneID, NSPredicate, NSString;

@interface CKQuerySubscription : CKSubscription

@property (copy, nonatomic, readonly) NSString *recordType;
@property (copy, nonatomic, readonly) NSPredicate *predicate;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (nonatomic, readonly) unsigned long long querySubscriptionOptions;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;

@end
