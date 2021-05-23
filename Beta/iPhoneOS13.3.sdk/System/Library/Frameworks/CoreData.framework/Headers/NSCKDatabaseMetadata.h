/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class CKServerChangeToken, NSDate, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSCKDatabaseMetadata : NSManagedObject

@property (retain, nonatomic) NSNumber *hasSubscriptionNum;
@property (retain, nonatomic) NSNumber *databaseScopeNum;
@property (retain, nonatomic) NSString *databaseName;
@property (nonatomic) long long databaseScope;
@property (retain, nonatomic) CKServerChangeToken *currentChangeToken;
@property (retain, nonatomic) NSDate *lastFetchDate;
@property (nonatomic) _Bool hasSubscription;
@property (retain, nonatomic) NSSet *recordZones;
@property (nonatomic) _Bool hasChanges;

+ (id)entityPath;
+ (id)databaseMetadataForScope:(long long)arg1 forStore:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
+ (id)stringForScope:(long long)arg1;

@end
