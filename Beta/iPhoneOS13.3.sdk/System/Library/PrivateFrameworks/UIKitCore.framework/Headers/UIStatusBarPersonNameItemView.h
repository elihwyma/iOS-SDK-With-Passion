/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarPersonNameItemView : UIStatusBarItemView

{
    NSString *_personNameString;
    double _letterSpacing;
    double _maxWidth;
}

- (id)accessibilityHUDRepresentation;
- (double)standardPadding;
- (long long)legibilityStyle;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)contentsImage;
- (double)extraRightPadding;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)arg1;
- (_Bool)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2;

@end
