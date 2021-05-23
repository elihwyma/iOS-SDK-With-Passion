/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@interface WFDrawerVelocityFilter : NSObject

{
    double _previousTime;
    double _previousValue;
    CDStruct_37002fae _currentSample;
    CDStruct_37002fae _previousSample;
}

@property (nonatomic) CDStruct_37002fae currentSample;
@property (nonatomic) CDStruct_37002fae previousSample;
@property (nonatomic) double previousTime;
@property (nonatomic) double previousValue;
@property (nonatomic, readonly) double calculatedVelocity;

- (void)addSample:(double)arg1;
- (void)resetWithValue:(double)arg1;

@end
