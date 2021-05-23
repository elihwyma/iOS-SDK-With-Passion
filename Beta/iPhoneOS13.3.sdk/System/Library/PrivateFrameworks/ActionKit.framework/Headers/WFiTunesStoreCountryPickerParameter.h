/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFiTunesStoreCountryPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentation;

@end
