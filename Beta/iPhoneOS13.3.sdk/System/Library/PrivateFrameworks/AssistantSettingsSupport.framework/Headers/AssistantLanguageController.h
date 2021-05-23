/*
 Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

#import <Preferences/PSListItemsController.h>

@class NSDate;

@interface AssistantLanguageController : PSListItemsController

{
    NSDate *_startDate;
}

+ (id)bundle;

- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)languageCodeDidChange:(id)arg1;

@end
