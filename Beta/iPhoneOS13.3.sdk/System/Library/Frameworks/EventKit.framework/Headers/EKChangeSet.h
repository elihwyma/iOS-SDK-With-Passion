/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface EKChangeSet : NSObject

{
    _Bool _skipsPersistentObjectCopy;
    _Bool _isNew;
    _Bool _isModified;
    _Bool _isSaved;
    _Bool _isDeleted;
    _Bool _isUndeleted;
    NSMutableDictionary *_singleValueChanges;
    NSMutableDictionary *_multiValueAdditions;
    NSMutableDictionary *_multiValueRemovals;
}

@property (retain, nonatomic) NSMutableDictionary *singleValueChanges;
@property (retain, nonatomic) NSMutableDictionary *multiValueAdditions;
@property (retain, nonatomic) NSMutableDictionary *multiValueRemovals;
@property (nonatomic) _Bool isNew;
@property (nonatomic) _Bool isModified;
@property (nonatomic) _Bool isSaved;
@property (nonatomic) _Bool isDeleted;
@property (nonatomic) _Bool isUndeleted;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)addChanges:(id)arg1;
- (_Bool)hasChanges;
- (_Bool)hasUnsavedChanges;
- (id)changedKeys;
- (id)summary;
- (_Bool)isEffectivelyEqual:(id)arg1;
- (void)forceChangeValue:(id)arg1 forKey:(id)arg2;
- (void)setSkipsPersistentObjectCopy:(_Bool)arg1;
- (void)changeSingleValue:(id)arg1 forKey:(id)arg2 basedOn:(id)arg3;
- (_Bool)hasUnsavedChangeForKey:(id)arg1;
- (id)valueForSingleValueKey:(id)arg1 basedOn:(id)arg2;
- (_Bool)skipsPersistentObjectCopy;
- (void)addChangesAndUpdateUniqueMultiValueObjects:(id)arg1;
- (void)replaceUniqueMultiValueObjectsWithUpdatedObjects:(id)arg1;
- (_Bool)hasUnsavedMultiValueRemovalForKey:(id)arg1;
- (_Bool)hasUnsavedMultiValueAdditionForKey:(id)arg1;
- (id)valuesForMultiValueKey:(id)arg1 basedOnSet:(id)arg2;
- (id)initWithChangeSet:(id)arg1;
- (id)initWithSingleValueChanges:(id)arg1 multiValueAdditions:(id)arg2 multiValueRemovals:(id)arg3;
- (id)_initWithChangeSet:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (void)rollbackChanges;
- (id)changedSingleValueKeys;
- (id)changedMultiValueKeys;
- (_Bool)_isNewAndUnsaved;
- (id)valueForSingleValueKey:(id)arg1 basedOn:(id)arg2 and:(id)arg3;
- (void)changeSingleValue:(id)arg1 forKey:(id)arg2 basedOn:(id)arg3 and:(id)arg4;
- (void)removeFromChanges:(id)arg1 forMultiValueKey:(id)arg2 basedOn:(id)arg3;
- (void)addToChanges:(id)arg1 forMultiValueKey:(id)arg2 basedOn:(id)arg3;
- (id)_semanticIdentifierToObjectMapForObjects:(id)arg1;
- (void)_cleanupEmptySetsForMultiValueKey:(id)arg1;
- (id)initWithChangeSet:(id)arg1 changesToSkip:(id)arg2;
- (id)initWithChangeSet:(id)arg1 changesToKeep:(id)arg2;
- (void)markChangesAsSaved;
- (id)unsavedMultiValueAddedObjectsForKey:(id)arg1;
- (id)unsavedMultiValueRemovedObjectsForKey:(id)arg1;
- (id)valuesForMultiValueKey:(id)arg1 basedOn:(id)arg2;
- (_Bool)isUniqueAddedObject:(id)arg1 forKey:(id)arg2;
- (void)replaceMultiChangeAddedObject:(id)arg1 withObject:(id)arg2 forKey:(id)arg3;

@end
