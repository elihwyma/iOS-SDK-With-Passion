/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarButtonActionItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayTimeItemView : UIStatusBarButtonActionItemView

{
    NSString *_timeString;
}

- (long long)textStyle;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)contentsImage;
- (double)neededSizeForImageSet:(id)arg1;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (id)_timeImageSet;
- (id)_timeImageSetForColor:(id)arg1;

@end
