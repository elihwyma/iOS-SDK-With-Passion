/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIVisualEffectView.h>

@class UIView;

@interface _TVVisualEffectView : UIVisualEffectView

{
    UIView *_hostView;
}

@property (weak, nonatomic) UIView *hostView;

+ (void)removeHostView:(id)arg1;
+ (void)disableForHostView:(id)arg1;
+ (void)enableForHostView:(id)arg1;
+ (void)addHostView:(id)arg1;
+ (id)hostViewDisablements;

- (void)dealloc;
- (void)didMoveToWindow;
- (void)_setDisabled:(_Bool)arg1;
- (void)_disablement:(id)arg1;

@end
