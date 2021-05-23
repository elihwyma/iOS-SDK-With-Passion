/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface _DKEventIntersection : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_events;
}

@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) NSArray *events;

+ (id)eventIntersectionWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;

- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;

@end
