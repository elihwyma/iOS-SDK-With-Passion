/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewSetPlacement.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement <Swift>

{
    struct CGPoint _normalizedOffset;
    struct UIEdgeInsets _chromeBuffer;
}

@property (nonatomic) struct CGPoint normalizedOffset;
@property (nonatomic) struct UIEdgeInsets chromeBuffer;

+ (_Bool)supportsSecureCoding;
+ (id)infoWithPoint:(struct CGPoint)arg1;
+ (id)placementWithUndockedOffset:(struct CGPoint)arg1 chromeBuffer:(struct UIEdgeInsets)arg2;
+ (struct CGPoint)computeOffsetForOffset:(struct CGPoint)arg1 withSize:(struct CGSize)arg2 chromeBuffer:(struct UIEdgeInsets)arg3 onScreenSize:(struct CGSize)arg4;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setOffset:(struct CGPoint)arg1;
- (_Bool)isUndocked;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;
- (_Bool)inputViewWillAppear;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (double)heightOfInputViews:(id)arg1;

@end
