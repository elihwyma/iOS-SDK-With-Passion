/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class UIStatusBar;

@interface SBZoomView : UIView

{
    UIView *_contentView;
    UIStatusBar *_statusBar;
}

@property (weak, nonatomic) UIStatusBar *statusBar;
@property (nonatomic, readonly) UIView *contentView;

+ (id)_chromeStatusBarImageForInterfaceOrientation:(long long)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_initWithFrame:(struct CGRect)arg1;

@end
