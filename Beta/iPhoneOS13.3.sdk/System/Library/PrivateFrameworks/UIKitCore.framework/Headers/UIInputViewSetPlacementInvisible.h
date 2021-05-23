/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewSetPlacement.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacement <Swift>

{
    UIInputViewSetPlacement *_actualPlacement;
}

+ (_Bool)supportsSecureCoding;
+ (id)placementWithPlacement:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGAffineTransform)transform;
- (double)alpha;
- (_Bool)isInteractive;
- (_Bool)showsInputViews;
- (_Bool)isUndocked;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;
- (_Bool)inputViewWillAppear;
- (_Bool)showsKeyboard;
- (void)setDirty;
- (_Bool)isInvisible;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (_Bool)accessoryViewWillAppear;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;
- (id)applicatorInfoForOwner:(id)arg1;

@end
