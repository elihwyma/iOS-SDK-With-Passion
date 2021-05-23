/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UILayerHostView.h>

@class _UIHostedWindowHostingHandle;

@interface _UIRemoteView : _UILayerHostView

{
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;
    CDUnknownBlockType _tintColorDidChangeHandler;
}

@property (copy, nonatomic) CDUnknownBlockType tintColorDidChangeHandler;
@property (nonatomic, setter=_setInheritsSecurity:) _Bool _inheritsSecurity;
@property (retain, nonatomic) _UIHostedWindowHostingHandle *hostedWindowHostingHandle;

+ (_Bool)_requiresWindowTouches;
+ (id)viewWithHostedWindowHostingHandle:(id)arg1;

- (void)tintColorDidChange;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 pid:(int)arg2 contextID:(unsigned int)arg3;
- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform)arg1 frame:(struct CGRect)arg2;

@end
