/*
 Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (CoreRecentsUtilities)

- (void)cr_removeObjectsStartingAtIndex:(unsigned long long)arg1;
- (void)cr_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)cr_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (void)cr_addNonNilObject:(id)arg1;

@end
