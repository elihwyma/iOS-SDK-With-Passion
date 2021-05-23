/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUImageTileViewController.h>

@class NSString, PUFilmstripWrapperView;

__attribute__((visibility("hidden")))
@interface PUFilmstripTileViewController : PUImageTileViewController

{
    _Bool __isExpanded;
    PUFilmstripWrapperView *__wrapperView;
    struct CGSize __expandedSize;
}

@property (nonatomic, readonly) PUFilmstripWrapperView *_wrapperView;
@property (nonatomic, setter=_setExpanded:) _Bool _isExpanded;
@property (nonatomic, setter=_setExpandedSize:) struct CGSize _expandedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)loadView;
- (void)becomeReusable;
- (void)applyLayoutInfo:(id)arg1;
- (void)setAssetViewModel:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)videoPlayer:(id)arg1 currentTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (_Bool)wantsVisibleRectChanges;
- (void)didChangeVisibleRect;
- (void)didChangeAnimating;
- (void)_updateFilmstripView;
- (id)_currentIndicatorInfos;

@end
