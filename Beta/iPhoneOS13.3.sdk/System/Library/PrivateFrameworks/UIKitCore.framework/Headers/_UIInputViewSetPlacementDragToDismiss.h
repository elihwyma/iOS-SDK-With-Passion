/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewSetPlacementOnScreen.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen <Swift>

{
    _Bool _dismissKeyboardOnly;
    double _offset;
}

@property (nonatomic) double offset;
@property (nonatomic) _Bool dismissKeyboardOnly;

+ (_Bool)supportsSecureCoding;
+ (id)placementWithOffset:(double)arg1 dismissKeyboardOnly:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isInteractive;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;

@end
