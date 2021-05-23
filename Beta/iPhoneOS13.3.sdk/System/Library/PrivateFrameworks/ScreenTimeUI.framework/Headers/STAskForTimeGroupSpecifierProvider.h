/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

__attribute__((visibility("hidden")))
@interface STAskForTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)requestSpecifiers;
- (void)confirmRespondToRequest:(id)arg1;
- (id)_createSpecifierForAskForMore:(id)arg1;
- (void)respondToRequest:(id)arg1 withApproval:(_Bool)arg2 timeApproved:(id)arg3;

@end
