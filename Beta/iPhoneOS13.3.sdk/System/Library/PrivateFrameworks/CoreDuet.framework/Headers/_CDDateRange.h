/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _CDDateRange : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) double duration;

+ (id)periodWithStart:(id)arg1 end:(id)arg2;
+ (id)periodWithStart:(id)arg1 duration:(double)arg2;
+ (id)periodWithEnd:(id)arg1 duration:(double)arg2;

- (id)description;
- (id)initWithStart:(id)arg1 andEnd:(id)arg2;
- (_Bool)contains:(id)arg1;

@end
