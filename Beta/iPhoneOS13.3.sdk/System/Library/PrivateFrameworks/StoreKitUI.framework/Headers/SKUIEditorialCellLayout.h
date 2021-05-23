/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUICellLayout.h>

@class NSString, SKUIEditorialLinkView, SKUITextBoxView;

__attribute__((visibility("hidden")))
@interface SKUIEditorialCellLayout : SKUICellLayout

{
    struct UIEdgeInsets _contentInset;
    double _linkSpacing;
    SKUIEditorialLinkView *_linkView;
    SKUITextBoxView *_textBoxView;
    double _totalHeight;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) SKUITextBoxView *textBoxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithParentView:(id)arg1;
- (id)_linkView;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(_Bool)arg3;
- (void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2;
- (void)resetContentInset;
- (id)initWithCollectionViewCell:(id)arg1;
- (id)_textBoxView;
- (void)_initContentInset;

@end
