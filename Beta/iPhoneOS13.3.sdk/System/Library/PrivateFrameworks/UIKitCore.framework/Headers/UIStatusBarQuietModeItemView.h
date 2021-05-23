/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarIndicatorItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView

{
    _Bool _hideForAction;
    _Bool _registeredForNotifications;
    _Bool _inactive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setVisible:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)accessibilityHUDRepresentation;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (void)_triggerAction:(id)arg1;
- (double)_visibleAlpha;

@end
