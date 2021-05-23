/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactCell.h>

@class NSDictionary, NSString, UIImageView, UILabel, UIView;

@protocol ABText;

__attribute__((visibility("hidden")))
@interface CNLabeledCell : CNContactCell

{
    NSDictionary *_labelTextAttributes;
    NSDictionary *_valueTextAttributes;
    _Bool _labelViewNeedsHuggingContent;
    _Bool _valueViewNeedsHuggingContent;
    UIImageView *_chevron;
}

@property (nonatomic, readonly) UIView<ABText> *labelView;
@property (nonatomic, readonly) UIView<ABText> *valueView;
@property (nonatomic) _Bool labelViewNeedsHuggingContent;
@property (nonatomic) _Bool valueViewNeedsHuggingContent;
@property (nonatomic, readonly) UIView *rightMostView;
@property (nonatomic, readonly) UILabel *standardLabelView;
@property (nonatomic, readonly) UILabel *standardValueView;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, readonly) NSString *valueString;
@property (nonatomic, readonly) double valueViewBottomMargin;
@property (copy, nonatomic) NSDictionary *labelTextAttributes;
@property (copy, nonatomic) NSDictionary *valueTextAttributes;
@property (nonatomic, readonly) double chevronWidth;
@property (nonatomic, readonly) UIImageView *chevron;

+ (_Bool)wantsChevron;
+ (_Bool)wantsHorizontalLayout;
+ (_Bool)wantsStandardConstraints;

- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)variableConstraints;
- (double)minCellHeight;
- (id)constantConstraints;
- (_Bool)allowsCellSelection;
- (_Bool)displaysCellSelectionState;
- (void)addChevron;
- (void)removeChevron;
- (id)constantConstraintsForStandardLayout;
- (id)variableConstraintsForStandardLayout;
- (id)constantConstraintsForVerticalLayout;
- (id)variableConstraintsForVerticalLayout;
- (id)constantConstraintsForHorizontalLayout;
- (id)variableConstraintsForHorizontalLayout;

@end
