/*
 Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (AXQueue)

- (void)ax_enqueueObject:(id)arg1;
- (id)ax_dequeueObject;
- (id)ax_lastEnqueuedObject;
- (id)ax_nextDequeuedObject;
- (void)ax_removeObjectsFromArrayUsingBlock:(CDUnknownBlockType)arg1;

@end
