/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class SUGradientButton;

@interface SUButtonAccessoryView : UIView

{
    SUGradientButton *_button;
}

@property (nonatomic, readonly) SUGradientButton *button;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithDefaultSize;

@end
