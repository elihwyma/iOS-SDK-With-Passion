/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@class LPVerticalTextStackViewStyle, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPVerticalTextStackView

{
    NSMutableArray *_items;
    _Bool _hasEverBuilt;
    struct UIEdgeInsets _contentInset;
    LPVerticalTextStackViewStyle *_style;
}

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)layoutComponentView;
- (struct CGSize)_layoutTextStackForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;

@end
