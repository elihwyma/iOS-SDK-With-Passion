/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PUEditPlugin, PUEditPluginManager, UINavigationController, UIViewController;

@protocol PUEditPluginSessionDataSource, PUEditPluginSessionDelegate, PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUEditPluginSession : NSObject

{
    PUEditPluginManager *_pluginManager;
    UINavigationController *_pluginNavigationController;
    _Bool _isAvailable;
    id <PUEditPluginSessionDataSource> _dataSource;
    id <PUEditPluginSessionDelegate> _delegate;
    id <PUEditableAsset> _asset;
    long long _adjustmentType;
    PUEditPlugin *_currentPlugin;
    UIViewController *__hostViewController;
}

@property (nonatomic, setter=_setIsAvailable:) _Bool isAvailable;
@property (retain, nonatomic, setter=_setCurrentPlugin:) PUEditPlugin *currentPlugin;
@property (nonatomic, setter=_setAdjustmentType:) long long adjustmentType;
@property (retain, nonatomic, setter=_setAsset:) id <PUEditableAsset> asset;
@property (weak, nonatomic, setter=_setHostViewController:) UIViewController *_hostViewController;
@property (weak, nonatomic) id <PUEditPluginSessionDataSource> dataSource;
@property (weak, nonatomic) id <PUEditPluginSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)updateAvailability;
- (void)editExtensionActivityViewController:(id)arg1 didSelectActivity:(id)arg2;
- (void)editPluginHostViewController:(id)arg1 didFinishWithCompletionType:(unsigned long long)arg2;
- (void)editPluginHostViewController:(id)arg1 loadItemProviderWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginHostViewController:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)updatePluginManager;
- (unsigned long long)pluginManagerMediaType;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (void)_pluginManagerPluginsDidChange:(id)arg1;
- (void)_unlockScreenIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginMarkupSessionWithAsset:(id)arg1 fromViewController:(id)arg2;
- (void)_beginMarkupSessionWithAsset:(id)arg1 fromViewController:(id)arg2;
- (id)_linkPresentationImage;
- (void)beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3;
- (void)_beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3;
- (void)dismissSession;
- (id)_localizedEditorListTitle;
- (void)shouldLaunchPlugin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentAlertController:(id)arg1;
- (void)_launchPlugin:(id)arg1 afterDismissingViewController:(id)arg2;

@end
