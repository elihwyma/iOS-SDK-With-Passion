/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPopoverBackgroundView.h>

__attribute__((visibility("hidden")))
@interface _UIViewServiceDummyPopoverBackgroundView : UIPopoverBackgroundView

{
    double arrowOffset;
    unsigned long long arrowDirection;
}

+ (struct UIEdgeInsets)contentViewInsets;
+ (double)arrowHeight;
+ (double)arrowBase;
+ (_Bool)wantsDefaultContentAppearance;

- (struct CGSize)_shadowOffset;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (void)setArrowOffset:(double)arg1;
- (void)setArrowDirection:(unsigned long long)arg1;

@end
