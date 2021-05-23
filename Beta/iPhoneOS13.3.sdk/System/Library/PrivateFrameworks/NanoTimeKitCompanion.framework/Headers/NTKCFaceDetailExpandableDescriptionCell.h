/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailDescriptionCell.h>

@class NSString, UIButton;

@protocol NTKCFaceDetailExpandableDescriptionCellDelegate;

@interface NTKCFaceDetailExpandableDescriptionCell : NTKCFaceDetailDescriptionCell

{
    _Bool _expanded;
    _Bool _canExpand;
    id <NTKCFaceDetailExpandableDescriptionCellDelegate> _delegate;
    UIButton *_moreButton;
    double _laidOutWidth;
    NSString *_laidOutContentSizeCategory;
}

@property (retain, nonatomic) UIButton *moreButton;
@property (nonatomic) double laidOutWidth;
@property (retain, nonatomic) NSString *laidOutContentSizeCategory;
@property (nonatomic) _Bool canExpand;
@property (nonatomic) _Bool expanded;
@property (weak, nonatomic) id <NTKCFaceDetailExpandableDescriptionCellDelegate> delegate;

+ (id)reuseIdentifier;

- (id)init;
- (void)layoutSubviews;
- (id)_moreButton;
- (void)_fontSizeDidChange;
- (void)_moreTapped;

@end
