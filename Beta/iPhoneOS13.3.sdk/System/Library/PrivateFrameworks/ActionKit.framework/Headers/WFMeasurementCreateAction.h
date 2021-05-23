/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFMeasurementCreateAction : WFAction

- (id)currentValue;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)outputMeasurementUnitType;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (id)currentUnit;
- (id)unitParameter;
- (id)currentUnitTypeState;

@end
