/*
 Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

#import <Preferences/PSListController.h>

@class ASTLockScreenSuggestionSpecifier;

@interface ASTLockScreenSuggestionsDetailListController : PSListController

{
    ASTLockScreenSuggestionSpecifier *_lockScreenSpecifier;
}

- (id)init;
- (id)specifiers;

@end
