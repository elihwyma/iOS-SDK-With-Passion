/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMObjectMergeOperations, NSArray, NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMObjectMergeCollection : NSObject

{
    NSMutableArray *_currentExistingObjects;
    HMObjectMergeOperations *_currentOperations;
    NSMutableArray *_currentAddedObjects;
    NSMutableArray *_currentRemovedObjects;
    NSMutableArray *_currentModifiedObjects;
    NSMapTable *_commonObjectsMaps;
}

@property (retain, nonatomic) NSMutableArray *currentExistingObjects;
@property (weak, nonatomic) HMObjectMergeOperations *currentOperations;
@property (retain, nonatomic) NSMutableArray *currentAddedObjects;
@property (retain, nonatomic) NSMutableArray *currentRemovedObjects;
@property (retain, nonatomic) NSMutableArray *currentModifiedObjects;
@property (retain, nonatomic) NSMapTable *commonObjectsMaps;
@property (nonatomic, readonly) NSArray *addedObjects;
@property (nonatomic, readonly) NSArray *removedObjects;
@property (nonatomic, readonly) NSArray *modifiedObjects;
@property (nonatomic, readonly) NSArray *existingObjects;
@property (nonatomic, readonly, getter=isModified) _Bool modified;
@property (nonatomic, readonly) unsigned long long modifiedCount;

- (id)init;
- (id)initWithExistingObjects:(id)arg1 newObjects:(id)arg2 operations:(id)arg3;
- (void)_enumerateObjectRemoveWithBlock:(CDUnknownBlockType)arg1;
- (void)_replaceAddedObjectsWithObjectsFromArray:(id)arg1;
- (void)_enumerateObjectAdditionWithBlock:(CDUnknownBlockType)arg1;
- (void)_mergeCommonObjects;
- (void)mergeCommonObjectsNoMergeCount;

@end
