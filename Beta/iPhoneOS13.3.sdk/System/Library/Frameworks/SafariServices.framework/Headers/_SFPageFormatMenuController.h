/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class UIViewController, _SFSettingsAlertItem;

@protocol _SFBrowserContentController;

@interface _SFPageFormatMenuController : NSObject

{
    _SFSettingsAlertItem *_readerAlertItem;
    id <_SFBrowserContentController> _browserContentController;
    UIViewController *_viewController;
}

@property (weak, nonatomic, readonly) id <_SFBrowserContentController> browserContentController;
@property (weak, nonatomic, readonly) UIViewController *viewController;

- (void)_readerAvailabilityDidChange:(id)arg1;
- (id)_readerTextSizeAlertItem;
- (id)_pageZoomAlertItem;
- (id)_readerAlertItem;
- (id)_readerFontAlertItem;
- (id)_readerThemeAlertItem;
- (_Bool)_canHideToolbar;
- (id)_fullScreenAlertItem;
- (id)_desktopMobileToggleAlertItem;
- (_Bool)_canToggleContentBlockers;
- (id)_contentBlockersToggleAlertItem;
- (id)_sitePreferencesAlertItem;
- (id)initWithBrowserContentController:(id)arg1;
- (void)presentMenuFromViewController:(id)arg1 withSourceInfo:(id)arg2;

@end
