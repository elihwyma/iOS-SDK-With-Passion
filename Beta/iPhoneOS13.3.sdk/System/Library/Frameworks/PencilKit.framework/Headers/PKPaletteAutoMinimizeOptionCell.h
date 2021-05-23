/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKPaletteOptionCell.h>

@class UISwitch;

@interface PKPaletteAutoMinimizeOptionCell : PKPaletteOptionCell

{
    UISwitch *_autoMinimizeSwitch;
}

@property (nonatomic, readonly) UISwitch *autoMinimizeSwitch;

- (id)initWithFrame:(struct CGRect)arg1;

@end
