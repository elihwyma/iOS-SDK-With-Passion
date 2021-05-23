/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSDictionary, NSMutableDictionary, NSString, UIColor, UILabel, _UIBadgeVisualStyle;

__attribute__((visibility("hidden")))
@interface _UIBadgeView : UIView

{
    UILabel *_label;
    NSMutableDictionary *_mergedTextAttributes;
    NSString *_text;
    NSDictionary *_textAttributes;
    UIColor *_badgeColor;
    _UIBadgeVisualStyle *_style;
    struct UIOffset _textOffset;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) UIColor *badgeColor;
@property (nonatomic) struct UIOffset textOffset;
@property (retain, nonatomic) _UIBadgeVisualStyle *style;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1;
- (void)_setUpLabelIfNecessary;
- (void)_applyTextToLabel;

@end
