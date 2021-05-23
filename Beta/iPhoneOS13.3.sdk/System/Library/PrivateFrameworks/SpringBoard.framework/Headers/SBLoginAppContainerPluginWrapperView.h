/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@interface SBLoginAppContainerPluginWrapperView : UIView

{
    UIView *_overlayWrapperView;
    UIView *_pluginView;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 overlayWrapperView:(id)arg2 pluginView:(id)arg3;

@end
