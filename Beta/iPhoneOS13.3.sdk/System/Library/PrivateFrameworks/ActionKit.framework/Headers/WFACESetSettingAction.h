/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFACEAction.h>

@interface WFACESetSettingAction : WFACEAction

- (void)finishRunningWithResult:(id)arg1 error:(id)arg2;
- (Class)commandClass;
- (id)settingValueKey;
- (void)populateBoolCommand:(id)arg1;
- (void)populateFloatCommand:(id)arg1;
- (void)constructAceCommandWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
