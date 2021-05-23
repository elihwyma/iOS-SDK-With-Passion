/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UISwipeActionDeleteScanlineView : UIView

{
    UIView *_bottomLineWrapper;
    UIView *_topLine;
    UIView *_bottomLine;
}

@property (copy, nonatomic) UIColor *deleteLineColor;

+ (double)lineHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
