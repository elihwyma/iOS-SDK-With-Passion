/*
 Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface ASTLockScreenSuggestionSpecifier : NSObject

{
    NSSet *_disabledLockScreenBundles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)specifierForBundleID:(id)arg1;
- (void)setLockScreenSwitchEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)isLockScreenSwitchEnabled:(id)arg1;

@end
