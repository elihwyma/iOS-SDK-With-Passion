/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoEditToolbar.h>

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditButtonCenteredToolbar : PUPhotoEditToolbar

{
    UIView *_centerView;
    NSArray *_leadingViews;
    NSArray *_trailingViews;
    NSArray *_leadingLayoutConstraints;
    NSArray *_trailingLayoutConstraints;
    NSArray *_centerLayoutConstraints;
}

@property (nonatomic, readonly) double interItemSpacing;

- (void)_invalidateAllConstraints;
- (void)_addLeadingConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;
- (void)_addTrailingConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;
- (void)_addCenterConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;
- (void)setCenterView:(id)arg1 leadingViews:(id)arg2 trailingViews:(id)arg3;

@end
