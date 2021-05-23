/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFRoutines : NSObject

+ (void)initialize;
+ (_Bool)isUbiquitousItemAtURL:(id)arg1;
+ (id)decodeValue:(id)arg1 forTransformableAttribute:(id)arg2;
+ (long long)integerValueForOverride:(id)arg1;
+ (id)newArrayOfObjectIDsFromCollection:(id)arg1;
+ (id)_remoteChangeNotificationNameForStore:(id)arg1;
+ (id)fetchHeterogeneousCollectionByObjectIDs:(id)arg1 intoContext:(id)arg2;
+ (id)_coalescedPrefetchKeypaths:(id)arg1;
+ (id)_getPFBundleVersionNumber;
+ (id)_rootEntityGroupsForObjects:(id)arg1 passingBlock:(CDUnknownBlockType)arg2;
+ (id)valueForProcessArgument:(id)arg1;
+ (id)transformDecodeValue:(id)arg1 forTransformerNamed:(id)arg2;
+ (id)transformEncodeValue:(id)arg1 forTransformerNamed:(id)arg2;
+ (id)newCollection:(Class)arg1 fromCollection:(id)arg2 byAddingItems:(id)arg3;
+ (id)_newCollectionFromCollection:(id)arg1 forParentContext:(id)arg2 andClass:(Class)arg3;
+ (id)newOrderedSetFromCollection:(id)arg1 byRemovingItems:(id)arg2;
+ (id)newMutableOrderedSetFromCollection:(id)arg1;
+ (id)newOrderedSetFromCollection:(id)arg1 byAddingItems:(id)arg2;
+ (struct __CFDictionary *)createDictionaryPartitioningObjectsByRootEntity:(id)arg1;
+ (struct __CFDictionary *)_createDictionaryPartitioningObjects:(id)arg1 intoHierarchies:(_Bool)arg2;
+ (struct __CFDictionary *)_createDictionaryPartitioningObjectIDs:(id)arg1 intoHierarchies:(_Bool)arg2;
+ (_Bool)_generateObjectIDMaptableForArray:(id)arg1 withMapping:(id *)arg2 andEntries:(id *)arg3;
+ (id)_newObjectIDsArrayWithMapping:(id)arg1 andEntries:(id)arg2 andCoordinator:(id)arg3;
+ (id)_frameworkHash;
+ (id)_groupObjectsByRootEntity:(id)arg1;
+ (unsigned long long)_generateHashForString:(id)arg1;
+ (id)_getUUID;
+ (_Bool)_doNameAndTypeCheck:(id)arg1;
+ (_Bool)convertCString:(const char *)arg1 toUnsignedInt64:(unsigned long long *)arg2 withBase:(int)arg3;
+ (id)attributeClassesForSecureCoding;
+ (id)plistClassesForSecureCoding;
+ (id)stringValueForOverride:(id)arg1;
+ (_Bool)boolValueForOverride:(id)arg1;
+ (id)writePFExternalReferenceDataToInterimFile:(id)arg1;
+ (_Bool)moveInterimFileToPermanentLocation:(id)arg1;
+ (void *)readExternalReferenceDataFromFile:(id)arg1;
+ (void)readBytesForExternalReferenceData:(id)arg1 intoBuffer:(void *)arg2 range:(struct _NSRange)arg3;
+ (id)newMappedDataForExternalReference:(id)arg1;
+ (long long)lengthOfFileAtExternalReferenceLocation:(const char *)arg1;
+ (void)deleteFileForPFExternalReferenceData:(id)arg1;
+ (_Bool)createExternalReferenceLinkFromPath:(const char *)arg1 toPath:(const char *)arg2 protectionLevel:(int)arg3;
+ (void)cleanupExternalReferenceLink:(const char *)arg1;
+ (void)attemptToUpdatePermissionsForFileAtPath:(const char *)arg1 toLevel:(int)arg2;
+ (_Bool)_isInMemoryStoreURL:(id)arg1;
+ (_Bool)_isInMemoryStore:(id)arg1;
+ (void)setOrRemoveValue:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3;
+ (id)_createNicksBase64EncodedStringFromData:(id)arg1;
+ (id)encodeObjectValue:(id)arg1 forTransformableAttribute:(id)arg2;
+ (void)getIndexes:(unsigned int *)arg1 fromCollection:(id)arg2 forObjectsInCollection:(id)arg3;
+ (id)newOrderedSetFromCollection:(id)arg1;
+ (id)anyObjectFromCollection:(id)arg1;
+ (id)newSetOfObjectIDsFromCollection:(id)arg1;
+ (id)newOrderedSetOfObjectIDsFromCollection:(id)arg1;
+ (_Bool)_objectsInOrderedCollection:(id)arg1 formSubstringInOrderedCollection:(id)arg2;
+ (id)newOrderedSetFromCollection:(id)arg1 byInsertingItems:(id)arg2 atIndex:(unsigned long long)arg3;
+ (id)newSetFromCollection:(id)arg1 byAddingItems:(id)arg2;
+ (id)newMutableSetFromCollection:(id)arg1 byRemovingItems:(id)arg2;
+ (id)newMutableSetFromCollection:(id)arg1 byIntersectingWithCollection:(id)arg2;
+ (id)newMutableArrayFromCollection:(id)arg1 byRemovingItems:(id)arg2;
+ (id)newMutableArrayFromCollection:(id)arg1 forParentContext:(id)arg2;
+ (id)newMutableSetFromCollection:(id)arg1 forParentContext:(id)arg2;
+ (id)newMutableOrderedSetFromCollection:(id)arg1 forParentContext:(id)arg2;
+ (id)_replaceBaseline:(id)arg1 inOrderedSet:(id)arg2 withOrderedSet:(id)arg3;
+ (_Bool)_expressionIsCompoundIndexCompatible:(id)arg1;
+ (struct __CFDictionary *)createDictionaryPartitioningObjectsByEntity:(id)arg1;
+ (struct __CFDictionary *)createDictionaryPartitioningObjectsIDByEntity:(id)arg1;
+ (struct __CFDictionary *)createDictionaryPartitioningObjectsIDByRootEntity:(id)arg1;
+ (_Bool)isUbiquitousURLUploaded:(id)arg1 error:(id *)arg2;
+ (_Bool)isUbiquitousURLDownloaded:(id)arg1 error:(id *)arg2;
+ (_Bool)isSanitizedVersionOf:(id)arg1 equalTo:(id)arg2;
+ (id)sanitize:(id)arg1;
+ (id)applicationDeactivateLifecyleNotifications;
+ (id)applicationActivateLifecyleNotifications;
+ (void)wrapBlockInGuardedAutoreleasePool:(CDUnknownBlockType)arg1;

@end
