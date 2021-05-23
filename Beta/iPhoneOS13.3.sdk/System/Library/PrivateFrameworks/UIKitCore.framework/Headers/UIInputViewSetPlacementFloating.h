/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewSetPlacementUndocked.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIInputViewSetPlacementFloatingShadow, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementFloating : UIInputViewSetPlacementUndocked <Swift>

{
    double _floatingWidth;
    UIView *_responderToFollow;
    struct CGRect _responderRect;
    struct CGSize _lastSize;
    UIInputViewSetPlacementFloatingShadow *_cachedSecondaryPlacement;
}

@property (nonatomic) double floatingWidth;
@property (nonatomic) UIResponder *responderToFollow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (struct CGRect)frameAtOffset:(struct CGPoint)arg1 keyboardSize:(struct CGSize)arg2 screenSize:(struct CGSize)arg3;
+ (id)placementWithUndockedOffset:(struct CGPoint)arg1 chromeBuffer:(struct UIEdgeInsets)arg2 floatingWidth:(double)arg3;
+ (id)infoWithPoint:(struct CGPoint)arg1 forOwner:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)isFloating;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (void)checkSizeForOwner:(id)arg1;
- (id)subPlacements;
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;
- (id)expiringPlacement;
- (struct CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1;
- (id)currentResponderView;

@end
