/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class CKEventMetric, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface BRCEventMetric : NSObject

{
    _Bool _isCKMetric;
    NSString *_eventName;
    NSDate *_startTime;
    NSDate *_endTime;
    CKEventMetric *_associatedCKEventMetricIfAvailable;
}

@property (nonatomic, readonly) NSString *eventName;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) _Bool isCKMetric;
@property (nonatomic, readonly) CKEventMetric *associatedCKEventMetricIfAvailable;

- (id)description;
- (id)initWithEventName:(id)arg1;
- (void)associateWithCompletedOperation:(id)arg1;
- (id)additionalPayload;
- (id)subDescription;

@end
