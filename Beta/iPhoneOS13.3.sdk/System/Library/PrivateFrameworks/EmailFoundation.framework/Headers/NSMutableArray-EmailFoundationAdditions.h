/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (EmailFoundationAdditions)

- (unsigned long long)ef_insertObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 allowDuplicates:(_Bool)arg4;
- (_Bool)ef_addObjectIfAbsent:(id)arg1;
- (unsigned long long)ef_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 allowDuplicates:(_Bool)arg3;
- (unsigned long long)ef_removeObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (_Bool)ef_addObjectIfAbsentAccordingToEquals:(id)arg1;
- (void)ef_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (void)ef_moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)ef_addAbsentObjectsFromArrayAccordingToEquals:(id)arg1;
- (void)ef_reverseObjects;
- (unsigned long long)ef_insertObject:(id)arg1 usingSortDescriptors:(id)arg2;
- (unsigned long long)ef_insertObjectIfAbsent:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (unsigned long long)ef_removeObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (void)ef_addOptionalObject:(id)arg1;
- (void)ef_trimToCount:(unsigned long long)arg1 fromStart:(_Bool)arg2;

@end
