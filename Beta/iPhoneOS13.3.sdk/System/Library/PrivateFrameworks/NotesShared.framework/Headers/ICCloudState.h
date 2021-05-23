/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <CoreData/NSManagedObject.h>

@class ICCloudSyncingObject, NSDate;

@interface ICCloudState : NSManagedObject

@property (nonatomic) _Bool inCloud;
@property (nonatomic) long long latestVersionSyncedToCloud;
@property (nonatomic) long long currentLocalVersion;
@property (retain, nonatomic) NSDate *localVersionDate;
@property (retain, nonatomic) ICCloudSyncingObject *cloudSyncingObject;

- (_Bool)isInCloud;

@end
