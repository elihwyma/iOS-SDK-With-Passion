/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIStackView, _UIPrototypingValue;

__attribute__((visibility("hidden")))
@interface _UIPrototypingMenuCell : UITableViewCell

{
    UIStackView *_stackView;
    UILabel *_titleLabel;
    _UIPrototypingValue *_prototypingSetting;
}

@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (retain, nonatomic) _UIPrototypingValue *prototypingSetting;

+ (long long)_layoutAxis;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_prototypingSettingDidChange;

@end
