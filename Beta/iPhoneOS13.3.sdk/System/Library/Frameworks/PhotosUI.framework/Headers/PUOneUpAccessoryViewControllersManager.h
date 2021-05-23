/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, PUBrowsingSession;

@protocol PUOneUpAccessoryViewControllersManagerDelegate;

@interface PUOneUpAccessoryViewControllersManager : NSObject

{
    struct {
        _Bool preventRevealInMomentActionForAssetReference;
        _Bool requestDismissal;
    } _delegateRepondsTo;
    PUBrowsingSession *_browsingSession;
    id <PUOneUpAccessoryViewControllersManagerDelegate> _delegate;
    CDUnknownBlockType _unlockDeviceStatus;
    CDUnknownBlockType _unlockDeviceHandler;
    NSMapTable *__accessoryViewControllers;
}

@property (nonatomic, readonly) NSMapTable *_accessoryViewControllers;
@property (nonatomic, readonly) PUBrowsingSession *browsingSession;
@property (weak, nonatomic) id <PUOneUpAccessoryViewControllersManagerDelegate> delegate;
@property (copy, nonatomic) CDUnknownBlockType unlockDeviceStatus;
@property (copy, nonatomic) CDUnknownBlockType unlockDeviceHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)photosDetailsUIViewControllerRequestDismissal:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)initWithBrowsingSession:(id)arg1;
- (long long)accessoryViewTypeForAsset:(id)arg1;
- (_Bool)shouldHideToolbarWhenShowingAccessoryViewControllerForAssetReference:(id)arg1;
- (id)accessoryViewControllerForAssetReference:(id)arg1;
- (id)accessoryViewControllerForAssetReference:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)assetReferenceForAccessoryViewController:(id)arg1;
- (void)_invalidateAccessoryViewControllersForAssetReferences:(id)arg1;
- (long long)_accessoryViewTypeForAsset:(id)arg1;
- (id)_createAccessoryViewControllerForAssetReference:(id)arg1;

@end
