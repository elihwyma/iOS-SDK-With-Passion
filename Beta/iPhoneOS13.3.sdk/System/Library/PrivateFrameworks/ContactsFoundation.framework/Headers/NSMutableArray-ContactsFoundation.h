/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (ContactsFoundation)

- (void)_cn_addNonNilObject:(id)arg1;
- (void)_cn_rotateRange:(struct _NSRange)arg1 by:(long long)arg2;
- (void)_cn_addObject:(id)arg1 count:(unsigned long long)arg2;
- (void)_cn_addNonNilObjectIfNotPresent:(id)arg1;
- (void)_cn_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (void)_cn_insertNonNilObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_cn_removeObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)_cn_reverseObjectsInRange:(struct _NSRange)arg1;
- (void)_cn_sortUsingAuxiliarySortOrder:(id)arg1 transform:(CDUnknownBlockType)arg2;

@end
