/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModel.h>

@class NSMutableSet, PHAnimatedImage, PUMediaProvider;

@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUBrowsingAnimatedImagePlayer : PUViewModel

{
    struct {
        _Bool animatedImage;
    } _isValid;
    _Bool _isAnimatedImageLoadingAllowed;
    int __animatedImageRequestID;
    id <PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    PHAnimatedImage *_animatedImage;
    NSMutableSet *__animatedImageLoadingDisablingReasons;
}

@property (retain, nonatomic, setter=_setAnimatedImage:) PHAnimatedImage *animatedImage;
@property (nonatomic, setter=_setAnimatedImageLoadingAllowed:) _Bool isAnimatedImageLoadingAllowed;
@property (retain, nonatomic) NSMutableSet *_animatedImageLoadingDisablingReasons;
@property (nonatomic, setter=_setAnimatedImageRequestID:) int _animatedImageRequestID;
@property (retain, nonatomic) id <PUDisplayAsset> asset;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;

- (id)init;
- (void)dealloc;
- (_Bool)_needsUpdate;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)debugDetailedDescription;
- (void)_invalidateAnimatedImage;
- (id)newViewModelChange;
- (void)_cancelLoading;
- (void)unloadAnimatedImage;
- (void)setAnimatedImageLoadingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_updateAnimatedImage;
- (void)_handleAnimatedImageRequestComplete:(id)arg1;

@end
