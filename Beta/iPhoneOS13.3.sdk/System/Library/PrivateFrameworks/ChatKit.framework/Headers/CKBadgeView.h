/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKBadgeView : UIView

{
    unsigned long long _value;
    UILabel *_countLabel;
}

@property (nonatomic, readonly) UILabel *countLabel;
@property (nonatomic) unsigned long long value;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
