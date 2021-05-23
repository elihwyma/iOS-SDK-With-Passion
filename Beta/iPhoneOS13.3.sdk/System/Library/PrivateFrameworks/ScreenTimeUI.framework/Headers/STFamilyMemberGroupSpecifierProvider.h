/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STFamilyMemberGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (void)imageDidUpdate:(id)arg1;
- (id)familySpecifiers;
- (id)totalChildUsageTime:(id)arg1;
- (void)showChildViewController:(id)arg1;
- (id)_createSpecifierForUser:(id)arg1;

@end
