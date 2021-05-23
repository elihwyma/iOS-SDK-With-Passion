/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSArray.h>

@interface NSArray (Additions)

- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)pl_shortDescription;
- (unsigned long long)pl_countOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)pl_indexOfFirstObjectInRange:(struct _NSRange)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)pl_indexOfLastObjectInRange:(struct _NSRange)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)arg1;
- (unsigned long long)pl_indexOfFirstObjectPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)pl_indexOfLastObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)_pl_map:(CDUnknownBlockType)arg1;
- (id)_pl_filter:(CDUnknownBlockType)arg1;
- (id)_pl_flatMap:(CDUnknownBlockType)arg1;
- (id)_pl_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)_pl_any:(CDUnknownBlockType)arg1;
- (id)_pl_groupBy:(CDUnknownBlockType)arg1;
- (id)_pl_indexBy:(CDUnknownBlockType)arg1;

@end
