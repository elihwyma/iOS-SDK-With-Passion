/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIDynamicCaretAlternatives : UIView

{
    UIView *_verticalDivider;
    UIView *_horizontalDivider;
    NSArray *_alternativesButtons;
}

@property (retain, nonatomic) UIView *verticalDivider;
@property (retain, nonatomic) UIView *horizontalDivider;
@property (retain, nonatomic) NSArray *alternativesButtons;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setButtonLabels:(id)arg1;
- (long long)indexOfButtonForPoint:(struct CGPoint)arg1;
- (void)highlightButtonAtIndex:(long long)arg1;

@end
