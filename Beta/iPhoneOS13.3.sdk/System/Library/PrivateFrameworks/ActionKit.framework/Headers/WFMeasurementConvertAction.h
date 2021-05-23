/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFMeasurementConvertAction : WFAction

- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)outputMeasurementUnitType;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (id)unitParameter;
- (id)currentUnitType;
- (id)unitWithSymbol:(id)arg1;

@end
