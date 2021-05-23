/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoEditBaseAdjustmentCell.h>

@protocol PUPhotoEditBaseAdjustmentCellDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditAdjustmentCell : PUPhotoEditBaseAdjustmentCell

{
    _Bool _shouldDisplayValueLabel;
    id <PUPhotoEditBaseAdjustmentCellDelegate> _delegate;
}

@property (weak, nonatomic) id <PUPhotoEditBaseAdjustmentCellDelegate> delegate;
@property (nonatomic) _Bool shouldDisplayValueLabel;
@property (nonatomic) _Bool displayMappedValue;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setImageName:(id)arg1;
- (void)setIsUserModifying:(_Bool)arg1;
- (void)_setupEventHandler;
- (void)_updateValueLabelVisibility;
- (void)handleButton:(id)arg1;

@end
