/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAction.h>

@class WFHomeWorkflow;

@interface HMShortcutAction : HMAction

{
    WFHomeWorkflow *_shortcut;
}

@property (readonly) WFHomeWorkflow *shortcut;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isSupportedForHome:(id)arg1;
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;

- (unsigned long long)type;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (id)initWithShortcut:(id)arg1;
- (id)_serializeForAdd;
- (_Bool)requiresDeviceUnlock;

@end
