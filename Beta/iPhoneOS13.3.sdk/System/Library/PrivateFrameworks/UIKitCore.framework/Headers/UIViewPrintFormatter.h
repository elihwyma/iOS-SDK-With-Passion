/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPrintFormatter.h>

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter

{
    UIView *_view;
}

@property (nonatomic, readonly) UIView *view;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)_recalcPageCount;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (id)_initWithView:(id)arg1;

@end
