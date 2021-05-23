/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class NSString, SKUIPassbookLoader;

@interface SUScriptViewControllerNativeObject : SUScriptNativeObject

{
    SKUIPassbookLoader *_passbookLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)passbookLoaderDidFinish:(id)arg1;
- (void)destroyNativeObject;
- (void)setupNativeObject;
- (void)setScriptObject:(id)arg1;
- (void)_loadPassbookPassWithURL:(id)arg1;
- (void)_reloadVisibility;
- (void)_parentViewControllerChangeNotification:(id)arg1;

@end
