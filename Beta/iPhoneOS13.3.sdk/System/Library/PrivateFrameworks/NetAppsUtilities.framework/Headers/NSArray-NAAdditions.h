/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSArray.h>

@interface NSArray (NAAdditions)

+ (id)na_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(CDUnknownBlockType)arg2;
+ (id)na_arrayWithSafeObject:(id)arg1;
+ (id)na_arrayWithTerminator:(id)arg1 nullableObjects:(id)arg2;

- (id)na_filter:(CDUnknownBlockType)arg1;
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(CDUnknownBlockType)arg1;
- (id)na_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)na_map:(CDUnknownBlockType)arg1;
- (_Bool)na_any:(CDUnknownBlockType)arg1;
- (void)na_each:(CDUnknownBlockType)arg1;
- (_Bool)na_all:(CDUnknownBlockType)arg1;
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;
- (id)na_arrayByFlattening;
- (_Bool)na_safeContainsObject:(id)arg1;
- (id)na_arrayWithResultsOfBlock:(CDUnknownBlockType)arg1;
- (id)na_flatMap:(CDUnknownBlockType)arg1;
- (id)na_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;

@end
