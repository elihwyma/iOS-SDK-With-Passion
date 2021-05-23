/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSMapTable, NSString, UIResponder;

__attribute__((visibility("hidden")))
@interface SKUIPanelView : SKUIViewReuseView

{
    NSMapTable *_animators;
    UIResponder *_inputResponder;
    NSMapTable *_viewElements;
    NSMapTable *_viewMargins;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;
+ (_Bool)_useEditorialLayoutForLabelElement:(id)arg1;
+ (_Bool)_isValidTextInputViewElement:(id)arg1;
+ (struct UIEdgeInsets)_marginsForViewElement:(id)arg1 index:(unsigned long long)arg2 width:(double)arg3 context:(id)arg4;
+ (void)_enumerateChildrenOfViewElement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (_Bool)_shouldDisplayViewElement:(id)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)animatorFeature:(id)arg1 performAnimationWithName:(id)arg2 options:(id)arg3;

@end
