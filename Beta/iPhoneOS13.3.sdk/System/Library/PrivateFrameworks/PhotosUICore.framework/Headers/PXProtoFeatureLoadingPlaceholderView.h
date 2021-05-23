/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXProtoFeaturePlaceholderView.h>

@class UIActivityIndicatorView, UILabel;

@interface PXProtoFeatureLoadingPlaceholderView : PXProtoFeaturePlaceholderView

{
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
}

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateLabelText;
- (_Bool)wantsContentView;
- (void)statusDescriptionDidChange;

@end
