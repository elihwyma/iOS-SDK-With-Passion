/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface ATXValueEstimationEvent : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_eventOwner;
    NSString *_eventType;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *eventOwner;
@property (nonatomic, readonly) NSString *eventType;

- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventOwner:(id)arg3 eventType:(id)arg4;

@end
