/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class SBSApplicationShortcutItem, UIApplicationShortcutItem;

@interface UIHandleApplicationShortcutAction : BSAction

@property (copy, nonatomic, readonly) SBSApplicationShortcutItem *sbsShortcutItem;
@property (copy, nonatomic, readonly) UIApplicationShortcutItem *uiShortcutItem;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
- (id)initWithSBSShortcutItem:(id)arg1;

@end
