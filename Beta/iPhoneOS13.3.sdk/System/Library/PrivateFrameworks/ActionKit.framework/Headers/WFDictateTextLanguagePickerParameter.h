/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFDictateTextLanguagePickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentation;

@end
