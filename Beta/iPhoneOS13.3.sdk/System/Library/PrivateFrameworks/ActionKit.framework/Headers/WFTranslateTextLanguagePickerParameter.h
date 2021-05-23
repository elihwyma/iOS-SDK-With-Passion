/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFTranslateTextLanguagePickerParameter : WFEnumerationParameter

{
    _Bool _supportsLanguageDetection;
    NSArray *_possibleStates;
}

@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) _Bool supportsLanguageDetection;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (id)defaultSerializedRepresentation;

@end
