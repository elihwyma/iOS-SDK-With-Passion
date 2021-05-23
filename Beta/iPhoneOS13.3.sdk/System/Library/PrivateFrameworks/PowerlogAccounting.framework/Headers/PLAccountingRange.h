/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface PLAccountingRange : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double length;

+ (id)rangeWithStartDate:(id)arg1 withEndDate:(id)arg2;
+ (id)emptyRange;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)containsDate:(id)arg1;
- (id)intersect:(id)arg1;
- (_Bool)overlaps:(id)arg1;
- (id)initWithStartDate:(id)arg1 withEndDate:(id)arg2;

@end
