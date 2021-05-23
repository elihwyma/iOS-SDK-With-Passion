/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSString, UIColor, UITextView;

@protocol SKUIEditorTemplateViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIEditorTemplateView : SKUIViewReuseView

{
    UIColor *_textColor;
    UITextView *_textView;
    struct CGRect _keyboardFrame;
    _Bool _disabled;
    double _bottomInset;
    id <SKUIEditorTemplateViewDelegate> _delegate;
}

@property (nonatomic) double bottomInset;
@property (weak, nonatomic) id <SKUIEditorTemplateViewDelegate> delegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic, readonly) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_reloadSubviews;
- (id)_textFromViewElement:(id)arg1;

@end
