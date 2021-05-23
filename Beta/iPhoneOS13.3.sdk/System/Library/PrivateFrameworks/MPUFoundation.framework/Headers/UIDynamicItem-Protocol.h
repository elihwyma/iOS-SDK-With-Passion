/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MPUFoundation/Swift-Protocol.h>

@class UIBezierPath;

@protocol UIDynamicItem <Swift>

@property (nonatomic) struct CGPoint center;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic, readonly) unsigned long long collisionBoundsType;
@property (nonatomic, readonly) UIBezierPath *collisionBoundingPath;

@end
