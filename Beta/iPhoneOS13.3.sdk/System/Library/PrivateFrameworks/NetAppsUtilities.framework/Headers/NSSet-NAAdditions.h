/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSSet.h>

@interface NSSet (NAAdditions)

+ (id)na_setWithSafeObject:(id)arg1;

- (id)na_filter:(CDUnknownBlockType)arg1;
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(CDUnknownBlockType)arg1;
- (id)na_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)na_map:(CDUnknownBlockType)arg1;
- (_Bool)na_any:(CDUnknownBlockType)arg1;
- (void)na_each:(CDUnknownBlockType)arg1;
- (_Bool)na_all:(CDUnknownBlockType)arg1;
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;
- (_Bool)na_safeContainsObject:(id)arg1;
- (id)na_flatMap:(CDUnknownBlockType)arg1;
- (id)na_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;
- (id)na_setByFlattening;
- (id)na_setByIntersectingWithSet:(id)arg1;
- (id)na_setByRemovingObjectsFromSet:(id)arg1;
- (id)na_setByDiffingWithSet:(id)arg1;

@end
