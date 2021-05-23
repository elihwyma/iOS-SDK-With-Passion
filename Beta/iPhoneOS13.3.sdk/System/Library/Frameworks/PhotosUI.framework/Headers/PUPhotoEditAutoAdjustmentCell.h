/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoEditBaseAdjustmentCell.h>

@class UITapGestureRecognizer;

@protocol PUPhotoEditBaseAdjustmentCellDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditAutoAdjustmentCell : PUPhotoEditBaseAdjustmentCell

{
    id <PUPhotoEditBaseAdjustmentCellDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id <PUPhotoEditBaseAdjustmentCellDelegate> delegate;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setImageName:(id)arg1;
- (void)handleButton:(id)arg1;
- (void)_configureContainerButton;

@end
