/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class CDDCloudKitRegisteredClient, NSDate, NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface CDDCloudKitScheduledActivity : NSManagedObject

@property (retain, nonatomic) NSNumber *activityTypeNum;
@property (retain, nonatomic) NSUUID *activityUUID;
@property (nonatomic) unsigned long long activityType;
@property (retain, nonatomic) NSDate *scheduledAt;
@property (retain, nonatomic) CDDCloudKitRegisteredClient *registeredClient;
@property (retain, nonatomic) NSNumber *isUserRequestedBackupTask;

+ (id)entityName;

- (void)populateFromCriteria:(id)arg1;
- (id)xpcActivityCriteria;

@end
