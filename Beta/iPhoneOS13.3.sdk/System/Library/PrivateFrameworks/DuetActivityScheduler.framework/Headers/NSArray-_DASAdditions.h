/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSArray.h>

@interface NSArray (_DASAdditions)

+ (id)array:(id)arg1 withItemsIn:(id)arg2;
+ (id)arrayWithIntersectionOf:(id)arg1 and:(id)arg2;
+ (id)arrayWithUnionOf:(id)arg1 and:(id)arg2;

- (double)standardDeviation;
- (_Bool)anyItemsIntersectArray:(id)arg1;
- (double)mean;
- (double)standardDeviationWithMean:(double)arg1;
- (double)cooccurrencesWith:(id)arg1;
- (double)correlationWith:(id)arg1;

@end
