/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface VUIOpenURLHandler : NSObject

{
    _Bool _openedByDeeplink;
    CDUnknownBlockType _completionHandler;
    NSURL *_deferredOpenURL;
    CDUnknownBlockType _deferredOpenURLCompletion;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSURL *deferredOpenURL;
@property (copy, nonatomic) CDUnknownBlockType deferredOpenURLCompletion;
@property (nonatomic) _Bool openedByDeeplink;

+ (id)sharedInstance;
+ (id)_getIDfromURLQueryParameters:(id)arg1 idKeyName:(id)arg2;
+ (void)_insertPageBehindTop:(id)arg1 viewControllers:(id)arg2 clearStack:(_Bool)arg3;
+ (void)_handleDeeplinkAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_pushPageViewControllers:(id)arg1 viewControllers:(id)arg2 skipLastViewController:(_Bool)arg3;

- (void)_processLocalLink:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processNonLocalLink:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleOpenURLRouterDataSource:(id)arg1 appContext:(id)arg2 clearStack:(_Bool)arg3 startDate:(id)arg4;
- (void)processURL:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processLocalLibraryLink:(id)arg1 playbackInitiationDate:(id)arg2 openURLCompletionDate:(id)arg3;
- (void)_fetchLocalMediaWithAdamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)parseURL:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processEntityWithContextData:(id)arg1 appContext:(id)arg2;
- (void)saveDeferredURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDeferredURLWithAppContext:(id)arg1;

@end
