/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface PFCloudKitOperationBatch : NSObject

{
    NSMutableSet *_deletedRecordIDs;
    NSMutableDictionary *_recordTypeToDeletedRecordID;
    NSMutableArray *_records;
    unsigned long long _sizeInBytes;
}

@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, readonly) NSSet *deletedRecordIDs;
@property (nonatomic, readonly) NSDictionary *recordTypeToDeletedRecordID;
@property (nonatomic, readonly) unsigned long long sizeInBytes;
@property (nonatomic, readonly) unsigned long long totalObjectCount;

- (id)init;
- (void)dealloc;
- (void)addRecord:(id)arg1;
- (void)addDeletedRecordID:(id)arg1 forRecordOfType:(id)arg2;

@end
