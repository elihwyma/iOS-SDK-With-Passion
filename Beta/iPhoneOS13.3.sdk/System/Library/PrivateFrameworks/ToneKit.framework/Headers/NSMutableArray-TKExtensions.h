/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TKExtensions)

- (void)tk_ensureHasItemsOrNullUpToIndex:(unsigned long long)arg1;
- (id)tk_lastEnqueuedObject;
- (void)tk_enqueueObject:(id)arg1;
- (id)tk_nextDequeuedObject;
- (id)tk_dequeueObject;

@end
