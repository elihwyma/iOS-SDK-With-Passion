/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, UIBezierPath;

@interface _MPUFallAnimatorDynamicItem : NSObject

{
    struct CGPoint _center;
    struct CGRect _bounds;
    struct CGAffineTransform _transform;
}

@property (nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) struct CGAffineTransform transform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long collisionBoundsType;
@property (nonatomic, readonly) UIBezierPath *collisionBoundingPath;

@end
