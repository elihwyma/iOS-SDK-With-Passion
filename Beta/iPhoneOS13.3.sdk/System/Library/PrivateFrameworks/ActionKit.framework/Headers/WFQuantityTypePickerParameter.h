/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFQuantityTypePickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
}

@property (nonatomic, readonly) NSArray *possibleStates;

- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;

@end
