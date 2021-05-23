/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class NSString, PSSpecifier, UIViewController;

__attribute__((visibility("hidden")))
@interface STEnableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

{
    PSSpecifier *_setupScreenTimeSpecifier;
    UIViewController *_rootViewController;
}

@property (retain) PSSpecifier *setupScreenTimeSpecifier;
@property (weak) UIViewController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (void)saveValuesForModel:(id)arg1;
- (void)setupScreenTime:(id)arg1;
- (id)enableScreenTimeFooterText;

@end
