/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSArray.h>

#import <ClassroomKit/Swift-Protocol.h>

@interface NSArray (JSONConformance) <Swift>

- (id)crk_JSONRepresentationWithPrettyPrinting:(_Bool)arg1 sortKeys:(_Bool)arg2;
- (id)crk_sortedSubarrayWithRange:(struct _NSRange)arg1 comparator:(CDUnknownBlockType)arg2;
- (id)crk_filterUsingBlock:(CDUnknownBlockType)arg1;
- (id)crk_mapUsingBlock:(CDUnknownBlockType)arg1;
- (id)crk_arrayByRemovingObject:(id)arg1;
- (_Bool)crk_isSortedByComparator:(CDUnknownBlockType)arg1;
- (id)crk_sortedArrayForRange:(struct _NSRange)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)crk_dictionaryUsingKeyGenerator:(CDUnknownBlockType)arg1 valueGenerator:(CDUnknownBlockType)arg2;
- (id)crk_partitionUsingKeyGenerator:(CDUnknownBlockType)arg1 valueGenerator:(CDUnknownBlockType)arg2;
- (_Bool)crk_startsWith:(id)arg1;

@end
