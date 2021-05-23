/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

@class NSString;

@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter

{
    NSString *_intentName;
}

@property (nonatomic, readonly) NSString *intentName;

- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (_Bool)alwaysShowsButton;

@end
