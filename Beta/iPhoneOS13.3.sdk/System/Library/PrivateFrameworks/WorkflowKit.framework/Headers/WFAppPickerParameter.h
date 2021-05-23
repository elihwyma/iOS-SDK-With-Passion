/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@interface WFAppPickerParameter : WFParameter

{
    long long _appSearchType;
}

@property (nonatomic, readonly) long long appSearchType;

- (id)initWithDefinition:(id)arg1;
- (id)localizedPlaceholder;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (id)localizedLabelForState:(id)arg1;
- (id)accessoryIconForState:(id)arg1;
- (id)stateForApp:(id)arg1;

@end
