/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXProtoFeatureView.h>

@class UILabel;

@interface PXProtoTextualFeatureView : PXProtoFeatureView

{
    UILabel *_label;
}

- (void)layoutSubviews;
- (void)updateContent;
- (struct UIEdgeInsets)minimumMargins;
- (struct CGSize)regularContentSize;
- (struct CGSize)compactContentSize;

@end
