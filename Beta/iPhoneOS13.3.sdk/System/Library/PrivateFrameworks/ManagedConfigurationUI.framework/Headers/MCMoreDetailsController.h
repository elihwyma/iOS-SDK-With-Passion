/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSListController.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface MCMoreDetailsController : PSListController

{
    UIImage *_iconImage;
}

@property (retain, nonatomic) UIImage *iconImage;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (id)_specifierForPayload:(id)arg1;

@end
