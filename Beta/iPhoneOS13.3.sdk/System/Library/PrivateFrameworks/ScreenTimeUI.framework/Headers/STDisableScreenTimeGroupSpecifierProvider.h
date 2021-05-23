/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STDisableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

{
    PSSpecifier *_disableScreenTimeSpecifier;
}

@property (retain, nonatomic) PSSpecifier *disableScreenTimeSpecifier;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)confirmDisableScreenTime:(id)arg1;
- (id)passcodeGatedDeleteButtonSpecifierWithName:(id)arg1 action:(SEL)arg2;
- (void)updateDisableScreenTimeSpecifier;
- (id)disableScreenTimeConfirmationPrompt;
- (void)disableScreenTime:(id)arg1;

@end
