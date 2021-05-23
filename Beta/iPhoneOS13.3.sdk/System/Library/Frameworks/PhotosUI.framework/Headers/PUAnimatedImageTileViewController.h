/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUImageTileViewController.h>

@class ISAnimatedImageView, NSString;

__attribute__((visibility("hidden")))
@interface PUAnimatedImageTileViewController : PUImageTileViewController

{
    ISAnimatedImageView *_animatedImageView;
    long long _interactionState;
    struct {
        _Bool playbackState;
        _Bool animatedImage;
    } _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)loadView;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)assetViewModelDidChange;
- (void)_invalidatePlaybackState;
- (void)_updatePlaybackStateIfNeeded;
- (void)_invalidateAnimatedImage;
- (void)_updateAnimatedImageIfNeeded;

@end
