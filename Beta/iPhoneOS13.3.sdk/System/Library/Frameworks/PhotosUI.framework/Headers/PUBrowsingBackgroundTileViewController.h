/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

@class NSString, PUBrowsingViewModel, UIColor, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface PUBrowsingBackgroundTileViewController : PUTileViewController

{
    _Bool _shouldDisplayEmptyPlaceholder;
    _Bool __needsUpdateColor;
    UIColor *_backgroundColorOverride;
    PUBrowsingViewModel *_viewModel;
    CDUnknownBlockType __nextColorUpdateAnimatorBlock;
    _UIContentUnavailableView *__emptyPlaceholderView;
}

@property (nonatomic, setter=_setNeedsUpdateColor:) _Bool _needsUpdateColor;
@property (copy, nonatomic, setter=_setNextColorUpdateAnimatorBlock:) CDUnknownBlockType _nextColorUpdateAnimatorBlock;
@property (retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView;
@property (retain, nonatomic) UIColor *backgroundColorOverride;
@property (nonatomic) _Bool shouldDisplayEmptyPlaceholder;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)applyLayoutInfo:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateEmptyPlaceholderAnimated:(_Bool)arg1;
- (void)_invalidateColor;
- (void)_invalidateColorWithAnimatorBlock:(CDUnknownBlockType)arg1;
- (void)_updateColorIfNeeded;

@end
