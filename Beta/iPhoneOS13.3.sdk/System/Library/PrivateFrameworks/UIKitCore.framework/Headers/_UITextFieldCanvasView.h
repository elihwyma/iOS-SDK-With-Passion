/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITextCanvasView.h>

@protocol _UITextFieldCanvasViewContext;

__attribute__((visibility("hidden")))
@interface _UITextFieldCanvasView : _UITextCanvasView

@property (weak, nonatomic) id <_UITextFieldCanvasViewContext> context;

- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_enableAutoConstraining;
- (void)drawTextInRect:(struct CGRect)arg1;

@end
