/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVContainerCollectionViewCell.h>

@class NSString, UIView;

@protocol TVAuxiliaryViewSelecting;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewCell : TVContainerCollectionViewCell

{
    UIView<TVAuxiliaryViewSelecting> *_selectingView;
}

@property (weak, nonatomic) UIView<TVAuxiliaryViewSelecting> *selectingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;

@end
