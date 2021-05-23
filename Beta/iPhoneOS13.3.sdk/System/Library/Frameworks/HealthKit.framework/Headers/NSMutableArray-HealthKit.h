/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (HealthKit)

- (id)hk_dequeue;
- (void)hk_addObjectsFromArray:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)hk_removeObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)hk_addNonNilObject:(id)arg1;

@end
