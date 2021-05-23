/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSNumber, NSString, PUEditPlugin, PUEditingExtensionUndoProxyHostSide, UIBarButtonItem;

@protocol NSCopying, PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUEditPluginHostViewController : UIViewController

{
    _Bool __extensionDidBeginContentEditing;
    _Bool __didHandleCancel;
    _Bool __didHandleDone;
    _Bool _showUndoRedoButtons;
    PUEditPlugin *_plugin;
    id <PUEditPluginHostViewControllerDataSource> _dataSource;
    id <PUEditPluginHostViewControllerDelegate> _delegate;
    UIViewController *__remoteViewController;
    id <NSCopying> __request;
    id __disablingIdleTimerToken;
    NSNumber *__allowsFullScreen;
    PUEditingExtensionUndoProxyHostSide *_undoProxy;
    UIBarButtonItem *_undoBarButtonItem;
    UIBarButtonItem *_redoBarButtonItem;
}

@property (retain, setter=_setRemoteViewController:) UIViewController *_remoteViewController;
@property (copy, setter=_setRequest:) id <NSCopying> _request;
@property (nonatomic, setter=_setExtensionDidBeginContentEditing:) _Bool _extensionDidBeginContentEditing;
@property (nonatomic, setter=_setDidHandleCancel:) _Bool _didHandleCancel;
@property (nonatomic, setter=_setDidHandleDone:) _Bool _didHandleDone;
@property (retain, nonatomic, setter=_setDisablingIdleTimerToken:) id _disablingIdleTimerToken;
@property (retain, nonatomic, setter=_setAllowsFullScreen:) NSNumber *_allowsFullScreen;
@property (retain, nonatomic) PUEditingExtensionUndoProxyHostSide *undoProxy;
@property (weak, nonatomic) UIBarButtonItem *undoBarButtonItem;
@property (weak, nonatomic) UIBarButtonItem *redoBarButtonItem;
@property (nonatomic) _Bool showUndoRedoButtons;
@property (nonatomic, readonly) PUEditPlugin *plugin;
@property (weak, nonatomic) id <PUEditPluginHostViewControllerDataSource> dataSource;
@property (weak, nonatomic) id <PUEditPluginHostViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_extensionVendorProxy;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_dismiss;
- (_Bool)prefersStatusBarHidden;
- (id)_hostContext;
- (void)_handleCancel;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (id)initWithPlugin:(id)arg1;
- (void)setShowUndoRedo:(_Bool)arg1;
- (void)setUndoEnabled:(_Bool)arg1 redoEnabled:(_Bool)arg2;
- (void)loadRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_queryAllowsFullScreen:(CDUnknownBlockType)arg1;
- (void)_handleVendorVersion:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2 timeout:(double)arg3;
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (void)_beginContentEditingWithCompletionHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (void)_addRemoteViewControllerIfNeededAllowingFullscreen:(_Bool)arg1;
- (void)_updateBarButtonsWithUndoRedoVisible:(_Bool)arg1;
- (void)_beginDisablingIdleTimer;
- (void)_endDisablingIdleTimerIfNecessary;
- (void)_setupUndoProxy;
- (void)handleUndoButton:(id)arg1;
- (void)handleRedoButton:(id)arg1;

@end
