/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFUnitTypePickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (id)localizedLabelForPossibleState:(id)arg1;

@end
