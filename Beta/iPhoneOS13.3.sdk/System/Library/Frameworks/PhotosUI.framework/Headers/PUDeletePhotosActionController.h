/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, UIAlertController;

@protocol PUDeletePhotosActionControllerDelegate;

@interface PUDeletePhotosActionController : NSObject

{
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _willDeleteHandler;
    _Bool _shouldSkipDeleteConfirmation;
    long long _action;
    id <PUDeletePhotosActionControllerDelegate> _delegate;
    NSArray *__assets;
    NSArray *__plAssets;
    NSArray *__plAdditionalAssetsToDelete;
    UIAlertController *__mainAlertController;
    UIAlertController *__oneTimeConfirmationAlertController;
}

@property (copy, nonatomic, readonly) NSArray *_assets;
@property (copy, nonatomic, readonly) NSArray *_plAssets;
@property (copy, nonatomic, readonly) NSArray *_plAdditionalAssetsToDelete;
@property (retain, nonatomic, setter=_setMainAlertController:) UIAlertController *_mainAlertController;
@property (retain, nonatomic, setter=_setOneTimeConfirmationAlertController:) UIAlertController *_oneTimeConfirmationAlertController;
@property (nonatomic, readonly) long long action;
@property (weak, nonatomic, readonly) id <PUDeletePhotosActionControllerDelegate> delegate;
@property (nonatomic) _Bool shouldSkipDeleteConfirmation;

- (id)initWithAction:(long long)arg1 assets:(id)arg2 delegate:(id)arg3;
- (void)performWithWillDeleteHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_performDeleteWithoutUserConfirmationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleFinalUserDecisionShouldDelete:(_Bool)arg1;
- (void)_runDestructiveActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ensureMainAlertController;
- (void)_ensureOneTimeConfirmationAlertController;
- (void)_showOnetimeConfirmation;
- (void)_handleMainAlertConfirmed:(_Bool)arg1;
- (void)_handleOneTimeAlertConfirmed;
- (void)_getDeleteActionSheetTitle:(id *)arg1 destructiveButtonTitle:(id *)arg2 cancelButtonTitle:(id *)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5;

@end
