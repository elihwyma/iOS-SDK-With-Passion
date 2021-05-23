/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class CKServerChangeToken, NSCKDatabaseMetadata, NSDate, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSCKRecordZoneMetadata : NSManagedObject

@property (retain, nonatomic) NSNumber *hasRecordZoneNum;
@property (retain, nonatomic) NSNumber *hasSubscriptionNum;
@property (retain, nonatomic) NSString *ckRecordZoneName;
@property (retain, nonatomic) NSString *ckOwnerName;
@property (retain, nonatomic) CKServerChangeToken *currentChangeToken;
@property (retain, nonatomic) NSCKDatabaseMetadata *database;
@property (retain, nonatomic) NSDate *lastFetchDate;
@property (nonatomic) _Bool hasRecordZone;
@property (nonatomic) _Bool hasSubscription;
@property (retain, nonatomic) NSSet *records;
@property (retain, nonatomic) NSSet *mirroredRelationships;
@property (nonatomic) _Bool hasChanges;

+ (id)entityPath;
+ (id)zoneMetadataForZoneID:(id)arg1 inDatabaseWithScope:(long long)arg2 forStore:(id)arg3 inContext:(id)arg4 error:(id *)arg5;

- (id)createRecordZoneID;

@end
