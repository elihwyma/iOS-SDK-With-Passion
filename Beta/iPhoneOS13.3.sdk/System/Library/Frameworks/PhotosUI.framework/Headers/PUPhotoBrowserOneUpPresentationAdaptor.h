/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@protocol PUPhotoBrowserZoomTransitionDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoBrowserOneUpPresentationAdaptor : NSObject

{
    struct {
        _Bool respondsToTransitionImageForPhotoToken;
        _Bool respondsToWillBeginForOperation;
        _Bool respondsToDidFinishForOperation;
        _Bool respondsToWillBeginAnimationForOperation;
        _Bool respondsToDidFinishAnimationForOperation;
        _Bool respondsToShouldHidePhotosTokens;
        _Bool respondsToSetVisibilityForPhotoToken;
    } _zoomTransitionDelegateFlags;
    _Bool __shouldDisableScroll;
    id <PUPhotoBrowserZoomTransitionDelegate> _zoomTransitionDelegate;
    NSSet *__photoTokensForHiddenAssetReferences;
}

@property (copy, nonatomic, setter=_setPhotoTokensForHiddenAssetReferences:) NSSet *_photoTokensForHiddenAssetReferences;
@property (nonatomic, setter=_setShouldDisableScroll:) _Bool _shouldDisableScroll;
@property (weak, nonatomic) id <PUPhotoBrowserZoomTransitionDelegate> zoomTransitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldDisableScroll:(_Bool)arg2;
- (struct CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets *)arg3 contentsRect:(struct CGRect *)arg4;
- (id)_photoTokenForAssetReference:(id)arg1;

@end
