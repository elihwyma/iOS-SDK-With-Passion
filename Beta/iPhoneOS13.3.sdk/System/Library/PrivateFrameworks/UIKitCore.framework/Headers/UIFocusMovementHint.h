/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface UIFocusMovementHint : NSObject <Swift>

{
    double _translationAmount;
    double _rotationAmount;
    struct CGVector _movementDirection;
}

@property (nonatomic) double translationAmount;
@property (nonatomic) double rotationAmount;
@property (nonatomic, readonly) struct CGVector movementDirection;
@property (nonatomic, readonly) struct CATransform3D perspectiveTransform;
@property (nonatomic, readonly) struct CGVector rotation;
@property (nonatomic, readonly) struct CGVector translation;
@property (nonatomic, readonly) struct CATransform3D interactionTransform;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMovementDirection:(struct CGVector)arg1 itemSize:(struct CGSize)arg2;

@end
