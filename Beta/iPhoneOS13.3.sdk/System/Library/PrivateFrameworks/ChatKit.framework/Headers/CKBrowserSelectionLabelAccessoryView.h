/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface CKBrowserSelectionLabelAccessoryView : UIView

{
    UIImageView *_plusLView;
    UIImageView *_plusDView;
}

@property (retain, nonatomic) UIImageView *plusLView;
@property (retain, nonatomic) UIImageView *plusDView;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithLabelAccessoryType:(unsigned long long)arg1;

@end
