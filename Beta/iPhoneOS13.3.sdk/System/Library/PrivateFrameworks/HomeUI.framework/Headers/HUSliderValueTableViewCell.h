/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, UIImage, UILabel, UISlider;

@protocol HUSliderValueTableViewCellDelegate;

@interface HUSliderValueTableViewCell : UITableViewCell

{
    _Bool _showValue;
    id <HUSliderValueTableViewCellDelegate> _delegate;
    UISlider *_slider;
    UILabel *_valueLabel;
    NSArray *_constraints;
}

@property (retain, nonatomic) UISlider *slider;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (weak, nonatomic) id <HUSliderValueTableViewCellDelegate> delegate;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
@property (nonatomic) double value;
@property (nonatomic) _Bool showValue;
@property (nonatomic, getter=isContinuous) _Bool continuous;
@property (retain, nonatomic) UIImage *minimumValueImage;
@property (retain, nonatomic) UIImage *maximumValueImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (void)prepareForReuse;
- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_sliderChanged:(id)arg1;
- (void)_setupAutoLayoutConstraints;

@end
