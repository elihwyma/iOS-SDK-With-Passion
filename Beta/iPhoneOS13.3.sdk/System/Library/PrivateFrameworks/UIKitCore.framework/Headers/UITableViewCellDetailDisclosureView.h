/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class UIButton, UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellDetailDisclosureView : UIControl

{
    UIButton *_accessoryButton;
    UIImageView *_disclosureView;
    UITableViewCell *_cell;
}

@property (nonatomic, readonly) UIButton *accessoryButton;

- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 cell:(id)arg3 buttonType:(long long)arg4 shouldReverseLayoutDirection:(_Bool)arg5;

@end
