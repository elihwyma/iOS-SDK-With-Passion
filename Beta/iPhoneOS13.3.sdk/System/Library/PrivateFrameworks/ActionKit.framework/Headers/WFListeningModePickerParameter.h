/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

@class NSString, WFAction;

@interface WFListeningModePickerParameter : WFDynamicEnumerationParameter

{
    WFAction *_action;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;

@end
