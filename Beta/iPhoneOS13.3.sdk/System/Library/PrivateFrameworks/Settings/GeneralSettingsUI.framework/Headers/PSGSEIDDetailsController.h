/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSListController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PSGSEIDDetailsController : PSListController

{
    NSString *_SEIDString;
}

@property (retain, nonatomic) NSString *SEIDString;

- (id)specifiers;
- (id)SEIDString:(id)arg1;

@end
