/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PUAssetActionPerformer, PUBrowsingSession, PXActionManager, UIViewController;

@protocol PUPreviewActionControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPreviewActionController : NSObject

{
    struct {
        _Bool didDismissWithActionIdentifier;
        _Bool preventRevealInMomentAction;
    } _delegateRespondsTo;
    PUBrowsingSession *_browsingSession;
    UIViewController *_presentingViewController;
    id <PUPreviewActionControllerDelegate> _delegate;
    PXActionManager *_photosUICoreActionManager;
    PUAssetActionPerformer *__activeActionPerformer;
}

@property (retain, nonatomic, setter=_setActiveActionPerformer:) PUAssetActionPerformer *_activeActionPerformer;
@property (nonatomic, readonly) NSArray *actions;
@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) id <PUPreviewActionControllerDelegate> delegate;
@property (retain, nonatomic) PXActionManager *photosUICoreActionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (_Bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_performTrashAction;
- (void)_performRestoreAction;
- (void)_executeActionPerformer:(id)arg1;
- (unsigned long long)_actionForPreferredAction:(unsigned long long)arg1;
- (void)_notifiyDelegateOfAction:(id)arg1;
- (void)_performSimpleActionWithType:(unsigned long long)arg1;
- (void)_performFavoriteAction:(_Bool)arg1;
- (void)_performCopyAction;
- (void)_performRevealInMomentAction;

@end
