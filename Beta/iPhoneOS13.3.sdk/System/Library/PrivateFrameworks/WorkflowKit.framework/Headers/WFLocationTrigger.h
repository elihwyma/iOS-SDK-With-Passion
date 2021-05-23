/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTrigger.h>

@class CLCircularRegion, NSDate;

@interface WFLocationTrigger : WFTrigger

{
    CLCircularRegion *_region;
    NSDate *_startTime;
    NSDate *_endTime;
}

@property (copy, nonatomic) CLCircularRegion *region;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;

+ (_Bool)supportsSecureCoding;
+ (id)timestampDateFormatter;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configureWithConfiguration:(id)arg1;
- (_Bool)hasValidConfiguration;

@end
