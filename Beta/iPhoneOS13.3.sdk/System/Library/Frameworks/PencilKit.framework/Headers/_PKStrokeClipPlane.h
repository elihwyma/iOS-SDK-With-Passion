/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

#import <PencilKit/Swift-Protocol.h>

@interface _PKStrokeClipPlane : NSObject <Swift>

{
    struct CGPoint _origin;
    struct CGPoint _normal;
}

@property (nonatomic, readonly) struct CGPoint origin;
@property (nonatomic, readonly) struct CGPoint normal;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)distanceToPoint:(struct CGPoint)arg1;
- (_Bool)isEqualToClipPlane:(id)arg1;
- (id)initWithOrigin:(struct CGPoint)arg1 normal:(struct CGPoint)arg2;

@end
