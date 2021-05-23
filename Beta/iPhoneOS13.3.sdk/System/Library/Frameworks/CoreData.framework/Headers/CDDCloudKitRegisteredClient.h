/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CDDCloudKitRegisteredClient : NSManagedObject

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *storePath;
@property (retain, nonatomic) NSString *storeConfigurationName;
@property (retain, nonatomic) NSString *fileProtectionType;
@property (retain, nonatomic) NSSet *scheduledActivities;
@property (retain, nonatomic) NSString *containerIdentifier;

+ (id)entityName;

@end
