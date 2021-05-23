/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge : UIView

{
    _Bool _selected;
    UILabel *_badgeTextLabel;
}

@property (retain, nonatomic) UILabel *badgeTextLabel;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (copy, nonatomic) NSString *text;

- (double)minHeight;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)_sizeToFit;

@end
