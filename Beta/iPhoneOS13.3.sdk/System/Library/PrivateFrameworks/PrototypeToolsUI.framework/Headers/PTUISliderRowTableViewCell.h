/*
 Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

#import <PrototypeToolsUI/PTUIRowTableViewCell.h>

@class _PTSAccessorySlider;

@interface PTUISliderRowTableViewCell : PTUIRowTableViewCell

{
    _PTSAccessorySlider *_slider;
}

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_valueChanged:(id)arg1;
- (void)updateDisplayedValue;
- (void)updateCellCharacteristics;

@end
