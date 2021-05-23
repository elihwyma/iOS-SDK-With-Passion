/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class _UIMotionEffectAcceleratedOutputRange;

__attribute__((visibility("hidden")))
@interface _UIViewerRelativeDevicePose : NSObject <Swift>

{
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;
    double _planarRotationAngle;
    struct UIOffset _viewerOffset;
}

@property (nonatomic) struct UIOffset viewerOffset;
@property (nonatomic) double planarRotationAngle;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_reset;
- (void)_setAcceleration:(struct CGPoint)arg1 fixingOutputForViewerOffset:(struct UIOffset)arg2;
- (id)_acceleratedOutputRange;
- (struct UIOffset)_acceleratedOutputForViewerOffset:(struct UIOffset)arg1 accelerationBoostFactor:(struct CGPoint)arg2;

@end
