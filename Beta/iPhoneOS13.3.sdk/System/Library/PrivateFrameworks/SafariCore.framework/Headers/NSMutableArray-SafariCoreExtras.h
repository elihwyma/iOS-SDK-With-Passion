/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (SafariCoreExtras)

- (void)safari_addObjectUnlessNil:(id)arg1;
- (void)safari_removeObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)safari_setObject:(id)arg1 atIndex:(unsigned long long)arg2 withPaddingObject:(id)arg3;
- (void)safari_removeObjectsAtIndexes:(id)arg1 withOffset:(long long)arg2 startingAtIndex:(unsigned long long)arg3;

@end
