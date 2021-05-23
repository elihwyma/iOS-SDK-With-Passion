/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSMutableOrderedSet.h>

@interface NSMutableOrderedSet (EmailFoundationAdditions)

- (id)ef_uniquedObject:(id)arg1;
- (void)ef_removeObjectsInArray:(id)arg1;
- (void)ef_insertObjects:(id)arg1 before:(id)arg2;
- (void)ef_insertObjects:(id)arg1 after:(id)arg2;

@end
