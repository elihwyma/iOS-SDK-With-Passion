/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPeopleNamePickerCell.h>

@class CNAvatarView, NSArray, UILabel, UIView;

@interface PXPeopleNamePickerContactCell : PXPeopleNamePickerCell

{
    CNAvatarView *_contactAvatarView;
    UILabel *_subtitleLabel;
    UIView *_labelsContainer;
    NSArray *_constraintsForVisibleSubtitle;
    NSArray *_constraintsForHiddenSubtitle;
}

@property (weak, nonatomic) UIView *labelsContainer;
@property (retain, nonatomic) NSArray *constraintsForVisibleSubtitle;
@property (retain, nonatomic) NSArray *constraintsForHiddenSubtitle;
@property (weak, nonatomic, readonly) CNAvatarView *contactAvatarView;
@property (weak, nonatomic, readonly) UILabel *subtitleLabel;

- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
