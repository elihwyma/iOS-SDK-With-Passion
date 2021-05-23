/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class ISURLOperationPool, NSLock, NSString, SUClientInterface, SUImageCache, SUScriptExecutionContext;

@protocol SUClientDelegate;

@interface SUClient : NSObject

{
    struct __CFArray *_assetTypes;
    SUClientInterface *_clientInterface;
    id <SUClientDelegate> _delegate;
    _Bool _dontSaveNavigationPath;
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    NSLock *_lock;
    SUScriptExecutionContext *_scriptExecutionContext;
}

@property (readonly) SUClientInterface *clientInterface;
@property (nonatomic) id <SUClientDelegate> delegate;
@property (nonatomic) _Bool dontSaveNavigationPath;
@property (retain, nonatomic) NSString *searchHintsURLBagKey;
@property (retain, nonatomic) NSString *searchURLBagKey;
@property (retain, nonatomic) SUImageCache *imageCache;
@property (retain, nonatomic) ISURLOperationPool *imagePool;
@property (nonatomic, readonly) SUScriptExecutionContext *scriptExecutionContext;

+ (id)sharedClient;
+ (id)viewControllerFactory;
+ (id)imagePool;
+ (void)setSharedClient:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)setClientIdentifier:(id)arg1;
- (id)clientIdentifier;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)setViewControllerFactory:(id)arg1;
- (id)viewControllerFactory;
- (void)_memoryWarningNotification:(id)arg1;
- (id)initWithClientInterface:(id)arg1;
- (_Bool)enterAccountFlowWithViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)sendActionForDialog:(id)arg1 button:(id)arg2;
- (id)queueSessionManager;
- (void)setQueueSessionManager:(id)arg1;
- (void)_bagDidLoadNotification:(id)arg1;
- (_Bool)composeReviewWithViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)dismissTopViewControllerAnimated:(_Bool)arg1;
- (id)_newComposeReviewViewControllerForButtonAction:(id)arg1;
- (id)_newAccountViewControllerForButtonAction:(id)arg1;
- (_Bool)openInternalURL:(id)arg1;
- (void)_purgeCaches;
- (void)_reloadScriptExecutionContext;
- (struct __CFArray *)assetTypes;
- (_Bool)openExternalURL:(id)arg1;
- (_Bool)openURL:(id)arg1 inClientApplication:(id)arg2;
- (void)setAssetTypes:(struct __CFArray *)arg1;
- (_Bool)_presentModalViewController:(id)arg1 animated:(_Bool)arg2;

@end
