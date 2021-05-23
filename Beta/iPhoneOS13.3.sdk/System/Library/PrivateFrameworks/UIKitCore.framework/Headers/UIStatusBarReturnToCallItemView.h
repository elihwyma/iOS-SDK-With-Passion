/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarAppIconItemView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIStatusBarReturnToCallItemView : UIStatusBarAppIconItemView

{
    UILabel *_textLabel;
}

- (id)_appBundleIdentifier;
- (void)layoutSubviews;
- (long long)buttonType;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)neededSizeForImageSet:(id)arg1;

@end
