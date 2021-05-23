/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STPINListViewController.h>

@class STContentPrivacyListController;

__attribute__((visibility("hidden")))
@interface STContentPrivacyStoreDetailController : STPINListViewController

{
    STContentPrivacyListController *_contentPrivacyController;
}

@property (weak) STContentPrivacyListController *contentPrivacyController;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (id)specifiers;
- (void)_isLoadedDidChange:(_Bool)arg1;

@end
