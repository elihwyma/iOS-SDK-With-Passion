/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface RETimeline : NSObject

{
    NSArray *_transitionDates;
    NSArray *_values;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *transitionDates;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForDate:(id)arg1;
- (_Bool)isEqualToTimeline:(id)arg1;
- (id)initWithStartDate:(id)arg1 values:(id)arg2 durations:(id)arg3;
- (id)initWithTimeline:(id)arg1;

@end
