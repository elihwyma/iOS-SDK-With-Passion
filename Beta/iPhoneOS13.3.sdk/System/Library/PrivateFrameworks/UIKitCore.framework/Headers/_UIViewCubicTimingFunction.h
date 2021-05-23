/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIViewCubicTimingFunction : NSObject <Swift>

{
    struct CGPoint _point1;
    struct CGPoint _point2;
}

@property (nonatomic, readonly) struct CGPoint controlPoint1;
@property (nonatomic, readonly) struct CGPoint controlPoint2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (id)_mediaTimingFunction;

@end
