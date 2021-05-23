/*
 Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

#import <Preferences/PSListController.h>

@class NSArray;

@interface AssistantIntentsController : PSListController

{
    NSArray *_intentsSpecifiers;
}

@property (retain, nonatomic) NSArray *intentsSpecifiers;

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void)setAccess:(id)arg1 forSpecifier:(id)arg2;
- (id)accesssForSpecifier:(id)arg1;
- (void)_fetchIntentsSpecifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidTapLearnMore:(id)arg1;
- (void)tccPreferencesChanged;

@end
