/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPickerTableViewCell.h>

@class NSAttributedString, NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewTitledCell : UIPickerTableViewCell

{
    UILabel *_titleLabel;
    _Bool _isAttributed;
    UIColor *_textColor;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (nonatomic, readonly) _Bool _isAttributed;

- (void)prepareForReuse;
- (_Bool)_canBeReusedInPickerView;
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 textColor:(id)arg3 forceTextAlignmentCentered:(_Bool)arg4;

@end
