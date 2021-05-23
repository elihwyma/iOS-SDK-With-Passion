/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSLock, NSMutableSet;

@interface MSPCloudContainerChangeSet : NSObject

{
    NSMutableSet *_changes;
    NSMutableSet *_deletes;
    NSLock *_lock;
}

@property (nonatomic, readonly) NSArray *changedRecords;
@property (nonatomic, readonly) NSArray *deletedRecords;
@property (nonatomic, readonly) NSDictionary *allChangesById;
@property (nonatomic, readonly) _Bool hasChanges;

- (id)init;
- (id)description;
- (void)addRecord:(id)arg1;
- (id)threadSafeArrayFromSet:(id)arg1;
- (void)threadSafeAddReplicaRecord:(id)arg1 toSet:(id)arg2;
- (void)addDeletedRecord:(id)arg1;
- (void)addChangedRecord:(id)arg1;

@end
