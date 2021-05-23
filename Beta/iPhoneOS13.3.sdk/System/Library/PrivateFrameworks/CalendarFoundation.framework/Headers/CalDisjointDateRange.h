/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface CalDisjointDateRange : NSObject

{
    NSMutableSet *_distinctRanges;
}

@property (copy, nonatomic) NSMutableSet *distinctRanges;

+ (_Bool)supportsSecureCoding;
+ (id)disjointRangeWithDistinctRanges:(id)arg1;
+ (id)disjointRangeWithSingleRange:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)containsDate:(id)arg1;
- (_Bool)containsRange:(id)arg1;
- (double)totalDuration;
- (id)addRange:(id)arg1;
- (_Bool)intersectsRange:(id)arg1;
- (id)subtractRange:(id)arg1;
- (id)intersectionWithRange:(id)arg1;
- (id)initWithDistinctRanges:(id)arg1;
- (id)sortedDistinctRanges;
- (id)addDisjointRange:(id)arg1;
- (id)subtractDisjointRange:(id)arg1;
- (id)intersectionWithDisjointRange:(id)arg1;

@end
