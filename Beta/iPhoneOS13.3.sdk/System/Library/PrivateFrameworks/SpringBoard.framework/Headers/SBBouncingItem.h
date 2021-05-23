/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, UIBezierPath;

@interface SBBouncingItem : NSObject

{
    struct CGRect _bounds;
    struct CGPoint _center;
    double _multiplier;
    CDUnknownBlockType _translateBlock;
}

@property double multiplier;
@property (copy) CDUnknownBlockType translateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGPoint center;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic, readonly) unsigned long long collisionBoundsType;
@property (nonatomic, readonly) UIBezierPath *collisionBoundingPath;

- (void)setBounds:(struct CGRect)arg1;

@end
