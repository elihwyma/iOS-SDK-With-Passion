/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView, _UIContextMenuLayoutArbiterInput;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLayoutArbiter : NSObject

{
    UIView *_containerView;
    unsigned long long _currentLayout;
    _UIContextMenuLayoutArbiterInput *_currentInput;
    CDStruct_6f807b77 _menuAnchor;
}

@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long currentLayout;
@property (retain, nonatomic) _UIContextMenuLayoutArbiterInput *currentInput;
@property (nonatomic, readonly) struct CGRect contentBounds;
@property (nonatomic, readonly) CDStruct_6f807b77 menuAnchor;

- (double)contentMargin;
- (unsigned long long)_updatedAttachmentEdge;
- (struct CGRect)_computedPreviewBoundsForContentBounds:(struct CGRect)arg1;
- (struct CGRect)_computedMenuBoundsForContentBounds:(struct CGRect)arg1 predictedPreviewFrame:(struct CGRect)arg2;
- (void)_positionPlatterFrame:(inout struct CGRect *)arg1 andActionViewFrame:(inout struct CGRect *)arg2 inBounds:(struct CGRect)arg3 aboutSourcePoint:(struct CGPoint)arg4;
- (void)_drawContentBoundsDebugUI:(struct CGRect)arg1;
- (id)_accessoryPositionsForBaseLayout:(id)arg1;
- (id)initWithContainerView:(id)arg1 layout:(unsigned long long)arg2;
- (id)computedLayoutWithInput:(id)arg1;

@end
