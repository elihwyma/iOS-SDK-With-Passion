/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, UIView, UIVisualEffectView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIInteractiveHighlightViewRecord : NSObject

{
    UIView *_view;
    UIView *_superview;
    UIVisualEffectView *_effectView;
    _UIPortalView *_portalView;
    NSHashTable *_interactiveHighlightEffects;
}

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIView *superview;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) _UIPortalView *portalView;
@property (retain, nonatomic) NSHashTable *interactiveHighlightEffects;

@end
