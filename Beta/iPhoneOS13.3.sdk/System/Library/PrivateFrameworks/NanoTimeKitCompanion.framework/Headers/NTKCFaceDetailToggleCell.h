/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class UISwitch;

@protocol NTKCFaceDetailToggleCellDelegate;

@interface NTKCFaceDetailToggleCell : NTKCDetailTableViewCell

{
    id <NTKCFaceDetailToggleCellDelegate> _delegate;
    UISwitch *_toggle;
}

@property (retain, nonatomic) UISwitch *toggle;
@property (nonatomic) _Bool on;
@property (weak, nonatomic) id <NTKCFaceDetailToggleCellDelegate> delegate;

+ (id)reuseIdentifier;

- (id)init;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)_switchToggled;

@end
