/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, NSString, WFAction;

@interface WFLightroomPresetPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    WFAction *_action;
}

@property (nonatomic, readonly) NSArray *possibleStates;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)presetsByGroup;

- (_Bool)isHidden;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;

@end
