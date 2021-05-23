/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIBarButtonItem.h>

@class NSString, SUTouchCaptureView, SUUIAppearance, UINavigationItem, UIView;

@interface SUBarButtonItem : UIBarButtonItem

{
    UIView *_accessoryView;
    struct UIEdgeInsets _accessoryViewInsets;
    SUUIAppearance *_confirmationAppearance;
    UINavigationItem *_lastNavigationItem;
    NSString *_preConfirmationTitle;
    SUTouchCaptureView *_touchCaptureView;
}

@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) struct UIEdgeInsets accessoryViewInsets;
@property (nonatomic, getter=isLoading) _Bool loading;
@property (nonatomic, readonly, getter=isShowingConfirmation) _Bool showingConfirmation;

+ (Class)classForNavigationButton;

- (void)dealloc;
- (id)createViewForNavigationItem:(id)arg1;
- (void)configureFromScriptButton:(id)arg1;
- (void)hideConfirmationWithAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)showConfirmationWithTitle:(id)arg1 appearance:(id)arg2 animated:(_Bool)arg3;
- (void)_touchCaptureAction:(id)arg1;
- (void)_removeTouchCaptureView;
- (void)_setTitle:(id)arg1 isConfirmation:(_Bool)arg2 appearance:(id)arg3 animated:(_Bool)arg4;
- (id)_navigationButton;
- (void)_updateViewForAccessoryChange;
- (void)_addTouchCaptureViewForNavigationButton:(id)arg1;

@end
