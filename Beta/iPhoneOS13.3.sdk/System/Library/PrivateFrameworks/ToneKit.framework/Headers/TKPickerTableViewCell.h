/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UITableViewCell.h>

@class UIColor;

@interface TKPickerTableViewCell : UITableViewCell

{
    _Bool _shouldTintTextLabel;
    UIColor *_textLabelColor;
}

@property (retain, nonatomic) UIColor *textLabelColor;
@property (nonatomic) _Bool shouldTintTextLabel;

- (void)tintColorDidChange;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
- (void)_updateTextLabelColor;

@end
