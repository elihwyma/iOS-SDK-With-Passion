/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface UITransform : NSObject <Swift>

{
    struct CGAffineTransform _transform;
}

@property (nonatomic, readonly) struct CGAffineTransform transform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)identity;
+ (id)rotationWithRadians:(double)arg1;
+ (id)transformWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)rotationWithDegrees:(long long)arg1;
+ (id)translation:(struct CGPoint)arg1;
+ (id)scaleX:(double)arg1 scaleY:(double)arg2;
+ (id)scale:(double)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithTransform:(struct CGAffineTransform)arg1;

@end
