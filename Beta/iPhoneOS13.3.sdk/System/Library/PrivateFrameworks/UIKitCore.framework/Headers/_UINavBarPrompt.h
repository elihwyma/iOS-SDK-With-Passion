/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UILabel, UINavigationBar;

__attribute__((visibility("hidden")))
@interface _UINavBarPrompt : UIView

{
    UILabel *_label;
    UINavigationBar *_navBar;
}

@property (copy, nonatomic) NSString *prompt;

- (void)layoutSubviews;
- (struct CGRect)promptBounds;
- (struct CGRect)_labelFrame;
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
- (id)initWithNavBar:(id)arg1;

@end
