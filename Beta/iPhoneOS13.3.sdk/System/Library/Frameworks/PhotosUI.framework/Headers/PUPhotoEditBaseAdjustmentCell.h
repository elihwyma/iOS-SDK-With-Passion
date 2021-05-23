/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, PUPhotoEditAdjustmentControl;

__attribute__((visibility("hidden")))
@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell

{
    NSString *_imageName;
    _Bool _enabled;
    _Bool _isUserModifying;
    PUPhotoEditAdjustmentControl *_containerButton;
}

@property (retain, nonatomic) PUPhotoEditAdjustmentControl *containerButton;
@property (nonatomic) double value;
@property (nonatomic) double defaultValue;
@property (nonatomic) double identityValue;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (retain, nonatomic) NSString *imageName;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) _Bool isUserModifying;

- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)resetToDefault;
- (void)_setupContainerButton;

@end
