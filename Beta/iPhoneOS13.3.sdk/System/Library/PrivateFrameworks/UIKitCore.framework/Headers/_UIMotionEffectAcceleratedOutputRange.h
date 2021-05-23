/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectAcceleratedOutputRange : NSObject <Swift>

{
    struct UIOffset _referenceOffset;
    struct CGPoint _referenceAcceleration;
    struct CGPoint _acceleration;
}

@property (nonatomic, readonly) struct CGPoint acceleration;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (void)setAcceleration:(struct CGPoint)arg1 fixingOutputForViewerOffset:(struct UIOffset)arg2;
- (struct UIOffset)acceleratedOutputForViewerOffset:(struct UIOffset)arg1 accelerationBoostFactor:(struct CGPoint)arg2;

@end
