/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIMotionEffect.h>

@class NSString;

@interface UIInterpolatingMotionEffect : UIMotionEffect

{
    double _horizontalAccelerationBoostFactor;
    double _verticalAccelerationBoostFactor;
    NSString *_keyPath;
    long long _type;
    id _minimumRelativeValue;
    id _maximumRelativeValue;
}

@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) long long type;
@property (retain, nonatomic) id minimumRelativeValue;
@property (retain, nonatomic) id maximumRelativeValue;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 type:(long long)arg2;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;
- (double)_horizontalAccelerationBoostFactor;
- (void)_setHorizontalAccelerationBoostFactor:(double)arg1;
- (double)_verticalAccelerationBoostFactor;
- (void)_setVerticalAccelerationBoostFactor:(double)arg1;
- (void)_setKeyPath:(id)arg1;
- (void)_setType:(long long)arg1;

@end
