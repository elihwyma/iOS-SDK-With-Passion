/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class HKQuantityType, NSArray;

@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    HKQuantityType *_quantityType;
}

@property (retain, nonatomic) HKQuantityType *quantityType;

- (_Bool)isHidden;
- (id)possibleStates;
- (id)localizedLabel;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentation;
- (_Bool)supportsImportQuestions;
- (void)updatePossibleStates;

@end
