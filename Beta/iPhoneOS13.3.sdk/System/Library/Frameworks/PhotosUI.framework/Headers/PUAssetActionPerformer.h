/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, UIViewController;

@protocol OS_os_log, PUAssetActionPerformerDelegate;

@interface PUAssetActionPerformer : NSObject

{
    CDUnknownBlockType _completionHandler;
    unsigned long long _actionType;
    unsigned long long _state;
    id <PUAssetActionPerformerDelegate> _delegate;
    UIViewController *_presentedViewController;
    NSObject<OS_os_log> *_actionPerformerLog;
    NSArray *_assets;
    NSDictionary *_assetsByAssetCollection;
}

@property (weak, nonatomic) NSObject<OS_os_log> *actionPerformerLog;
@property (copy, nonatomic, readonly) NSArray *assets;
@property (copy, nonatomic, readonly) NSDictionary *assetsByAssetCollection;
@property (nonatomic, readonly) unsigned long long actionType;
@property (nonatomic, readonly) unsigned long long state;
@property (weak, nonatomic) id <PUAssetActionPerformerDelegate> delegate;
@property (nonatomic, readonly) UIViewController *presentedViewController;

- (id)init;
- (_Bool)presentViewController:(id)arg1;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)completeUserInteractionTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_performUnlockIfNeeded;
- (void)_completeUnlockTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (_Bool)dismissViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeBackgroundTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_handleStepFinished:(unsigned long long)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_transitionToState:(unsigned long long)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_completeStateWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithActionType:(unsigned long long)arg1 assets:(id)arg2 orAssetsByAssetCollection:(id)arg3;
- (_Bool)_requiresUnlockedDevice;
- (void)preheatUserInteractionTask;

@end
