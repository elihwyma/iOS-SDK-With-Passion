/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKNotificationInfo, CKRecordZoneID, NSPredicate, NSString;

@interface CKSubscription : NSObject

{
    NSString *_subscriptionID;
    long long _subscriptionType;
    CKNotificationInfo *_notificationInfo;
    CKRecordZoneID *_zoneID;
    NSString *_recordType;
    NSPredicate *_predicate;
    unsigned long long _subscriptionOptions;
}

@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (copy, nonatomic) NSString *recordType;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSString *subscriptionID;
@property (nonatomic) long long subscriptionType;
@property (nonatomic) unsigned long long subscriptionOptions;
@property (copy, nonatomic) CKNotificationInfo *notificationInfo;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)_initBare;
- (id)_initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (unsigned long long)_subscriptionOptions;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;
- (id)_initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (id)_initWithSubscriptionType:(long long)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (void)_validateSubscriptionOptions:(unsigned long long)arg1;
- (id)initWithZoneID:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;

@end
