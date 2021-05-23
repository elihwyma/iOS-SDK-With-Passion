/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextGestureCluster.h>

@class UIPreviewItemController;

__attribute__((visibility("hidden")))
@interface UITextGestureClusterPreview : UITextGestureCluster

{
    UIPreviewItemController *_previewItemController;
    _Bool _detachOnDealloc;
}

- (void)dealloc;
- (id)initWithView:(id)arg1;
- (void)detach;
- (_Bool)doesControlDelegate;
- (void)_resetForLink;
- (_Bool)shouldClusterAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;

@end
