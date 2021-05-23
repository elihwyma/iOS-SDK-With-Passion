/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSMapTable, NSMutableArray, NSString, SKUIShapeView, SKUIViewElement, UIColor;

@protocol SKUISignInViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUISignInView : UIView

{
    UIColor *_borderColor;
    SKUIShapeView *_borderView;
    NSMutableArray *_labels;
    NSMutableArray *_textFields;
    SKUIViewElement *_viewElement;
    NSMapTable *_viewFontDescriptors;
    id <SKUISignInViewDelegate> _delegate;
}

@property (weak, nonatomic) id <SKUISignInViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_fontDescriptorWithViewElement:(id)arg1 defaultTextStyle:(id)arg2 bold:(_Bool)arg3;
+ (id)_labelWithViewElement:(id)arg1;
+ (id)_textFieldWithViewElement:(id)arg1;
+ (id)_borderPathWithSize:(struct CGSize)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (double)_layoutLabels;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_clearFieldsAndLabels;
- (void)_layoutTextFieldsOffsetX:(double)arg1;
- (id)_accountNameText;
- (id)_applePasswordText;

@end
