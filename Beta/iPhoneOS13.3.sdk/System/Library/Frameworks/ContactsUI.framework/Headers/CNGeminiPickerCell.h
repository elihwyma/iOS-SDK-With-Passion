/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNLabeledCell.h>

@class NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface CNGeminiPickerCell : CNLabeledCell

{
    UILabel *_labelLabel;
    UILabel *_valueLabel;
    NSString *_badgeText;
    UIView *_badgeView;
}

@property (nonatomic, readonly) UILabel *labelLabel;
@property (nonatomic, readonly) UILabel *valueLabel;
@property (nonatomic, readonly) NSString *badgeText;
@property (retain, nonatomic) UIView *badgeView;

- (void)dealloc;
- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)labelView;
- (void)setText:(id)arg1 detailText:(id)arg2;
- (id)valueView;
- (id)variableConstraints;

@end
