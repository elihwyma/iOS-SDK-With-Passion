/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@protocol UIDebuggingZoomDelegate;

__attribute__((visibility("hidden")))
@interface UIDebuggingZoomLoupeView : UIView

{
    id <UIDebuggingZoomDelegate> _delegate;
    struct CGPoint _currentlyInspectedPoint;
}

@property (nonatomic) struct CGPoint currentlyInspectedPoint;
@property (weak, nonatomic) id <UIDebuggingZoomDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
