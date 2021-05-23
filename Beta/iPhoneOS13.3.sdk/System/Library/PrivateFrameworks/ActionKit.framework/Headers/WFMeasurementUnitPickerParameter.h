/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSString, WFAction;

@interface WFMeasurementUnitPickerParameter : WFEnumerationParameter

{
    WFAction *_action;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isHidden;
- (id)possibleStates;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentation;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)currentUnitType;

@end
