/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface CNLabeledBadge : UIView

{
    UILabel *_label;
    double _height;
    struct CGSize _cachedTextSize;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIColor *textColor;

+ (id)labeledBadgeWithText:(id)arg1;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)invalidateCachedTextSize;
- (void)cacheTextSizeIfNeeded;

@end
