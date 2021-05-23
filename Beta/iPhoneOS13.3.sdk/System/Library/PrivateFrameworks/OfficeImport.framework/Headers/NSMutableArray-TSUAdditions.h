/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TSUAdditions)

- (void)tsu_addObjects:(id)arg1;
- (void)tsu_enqueue:(id)arg1;
- (id)tsu_dequeue;
- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_pop;
- (void)tsu_push:(id)arg1;
- (void)tsu_trimObjectsFromIndex:(unsigned long long)arg1;
- (unsigned long long)tsu_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;

@end
