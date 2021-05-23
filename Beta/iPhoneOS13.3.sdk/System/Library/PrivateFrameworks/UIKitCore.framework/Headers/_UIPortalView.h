/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CAPortalLayer;

__attribute__((visibility("hidden")))
@interface _UIPortalView : UIView

{
    _Bool _forwardsClientHitTestingToSourceView;
    UIView *_sourceView;
}

@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) _Bool hidesSourceView;
@property (nonatomic) _Bool matchesAlpha;
@property (nonatomic) _Bool matchesTransform;
@property (nonatomic) _Bool matchesPosition;
@property (nonatomic) _Bool allowsBackdropGroups;
@property (nonatomic) _Bool allowsHitTesting;
@property (nonatomic) _Bool forwardsClientHitTestingToSourceView;
@property (nonatomic, readonly) CAPortalLayer *portalLayer;

+ (Class)layerClass;

- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
