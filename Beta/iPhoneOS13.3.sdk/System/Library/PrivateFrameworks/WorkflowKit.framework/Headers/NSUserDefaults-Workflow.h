/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (Workflow)

+ (id)workflowUserDefaults;
+ (id)systemShortcutsUserDefaults;
+ (id)siriAssistantUserDefaults;

- (void)setWorkflowIdentifier:(id)arg1 forToken:(id)arg2;
- (id)workflowIdentifierConsumingSingleUseToken:(id)arg1;
- (void)wf_registerDefaultDisabledDevices;
- (_Bool)wf_isCurrentDeviceModelDisabledInSiri;
- (_Bool)wf_isDeviceIdiomDisabledInSiri:(long long)arg1;
- (_Bool)wf_voiceParametersDisabled;
- (id)wf_keyForDisablingDeviceIdiom:(long long)arg1;

@end
