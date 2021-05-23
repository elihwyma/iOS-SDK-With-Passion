/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class PXCMMPosterUIView;

@interface PXDebugCMMSuggestionCollectionViewCell : UICollectionViewCell

{
    PXCMMPosterUIView *_gadgetView;
}

@property (nonatomic, readonly) PXCMMPosterUIView *gadgetView;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
