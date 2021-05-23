/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFContentItemAction.h>

@interface WFContentItemPropertiesAction : WFContentItemAction

- (id)name;
- (id)keywords;
- (id)properties;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (id)localizedDefaultOutputName;
- (_Bool)inputRequired;
- (id)parameterSummary;
- (id)descriptionSummary;
- (id)allPossibleDescriptionResults;
- (id)descriptionResult;
- (id)inputParameterKey;
- (id)selectedProperty;
- (id)parameterDefinitions;
- (void)finishWithItems:(id)arg1 property:(id)arg2 coercionPerformed:(_Bool)arg3;

@end
