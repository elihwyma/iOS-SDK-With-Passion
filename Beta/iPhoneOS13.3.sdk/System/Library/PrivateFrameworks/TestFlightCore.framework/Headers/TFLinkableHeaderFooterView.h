/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class UITextView;

__attribute__((visibility("hidden")))
@interface TFLinkableHeaderFooterView : UITableViewHeaderFooterView

{
    _Bool _isHeader;
    UITextView *_textView;
}

@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic) _Bool isHeader;

+ (id)reuseIdentifier;
+ (struct CGSize)itemSizeWithText:(id)arg1 isHeader:(_Bool)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;
+ (double)_heightForTextViewWithText:(id)arg1 font:(id)arg2 isHeader:(_Bool)arg3 fittingWidth:(double)arg4 inTraitEnvironment:(id)arg5;

- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_updateTextViewWithLinkMap:(id)arg1;
- (void)applyText:(id)arg1 withTextLinkMap:(id)arg2 isHeader:(_Bool)arg3;

@end
