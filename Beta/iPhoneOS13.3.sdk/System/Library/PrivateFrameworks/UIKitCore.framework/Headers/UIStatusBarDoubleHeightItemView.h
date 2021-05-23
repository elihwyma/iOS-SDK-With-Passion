/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView

{
    NSString *_contentsString;
    double _letterSpacing;
    _Bool _ellipsize;
}

- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)contentsImage;
- (double)extraRightPadding;

@end
