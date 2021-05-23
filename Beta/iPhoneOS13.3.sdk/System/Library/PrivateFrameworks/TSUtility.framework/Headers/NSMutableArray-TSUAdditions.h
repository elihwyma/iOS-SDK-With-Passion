/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TSUAdditions)

- (void)tsu_addObjects:(id)arg1;
- (void)push_tsu:(id)arg1;
- (id)pop_tsu;
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 onObjectsFromArray:(id)arg2;
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 withObject:(id)arg2 onObjectsFromArray:(id)arg3;
- (void)tsu_enqueue:(id)arg1;
- (id)tsu_dequeue;
- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;
- (void)tsu_removeObjectsIdenticalToObjectsInSet:(id)arg1;
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;

@end
