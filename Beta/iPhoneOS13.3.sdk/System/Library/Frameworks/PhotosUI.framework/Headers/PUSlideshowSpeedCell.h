/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, UIImageView, UISlider;

@protocol PUSlideshowSpeedCellDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowSpeedCell : UITableViewCell

{
    UIImageView *_slowerGlyphImageView;
    UIImageView *_fasterGlyphImageView;
    UISlider *_slider;
    NSArray *_speedConstraints;
    _Bool _enabled;
    id <PUSlideshowSpeedCellDelegate> _delegate;
}

@property (nonatomic) double stepDuration;
@property (weak, nonatomic) id <PUSlideshowSpeedCellDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (void)updateConstraints;
- (void)_updateView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_stepDurationValueChanged:(id)arg1;

@end
