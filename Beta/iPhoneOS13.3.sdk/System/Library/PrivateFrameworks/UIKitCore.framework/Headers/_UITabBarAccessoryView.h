/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@interface _UITabBarAccessoryView : UIView

{
    UIView *_contentView;
    struct CGSize _preferredSize;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) struct CGSize preferredSize;

- (id)init;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
