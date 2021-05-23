/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UIRecentsAccessoryDefaultView : UIView

{
    UILabel *_titleLabel;
    UILabel *_subheadLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subheadLabel;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)_updateLabelTextColors;

@end
