/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXProtoFeaturePlaceholderView.h>

@class UILabel;

@interface PXProtoFeatureEmptyPlaceholderView : PXProtoFeaturePlaceholderView

{
    UILabel *_label;
}

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateLabelText;
- (_Bool)wantsContentView;
- (void)statusDescriptionDidChange;

@end
