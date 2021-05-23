/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/UIView.h>

@protocol CNAtomTextViewAtomLayout;

@interface _CNAtomLayoutView : UIView

{
    UIView<CNAtomTextViewAtomLayout> *_delegateView;
}

@property (nonatomic, readonly) struct UIEdgeInsets atomInsets;
@property (retain, nonatomic) UIView<CNAtomTextViewAtomLayout> *delegateView;

+ (id)layoutViewWithDelegateView:(id)arg1;

- (id)init;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (struct CGRect)selectionBounds;
- (id)initWithDelegateView:(id)arg1;
- (struct CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)setMaskBounds:(struct CGRect)arg1;

@end
