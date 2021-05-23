/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface JTTrackedEffectProperties : NSObject

{
    _Bool _disableTracking;
    int _internalTrackingType;
}

@property int internalTrackingType;
@property (getter=isTrackingDisabled) _Bool disableTracking;
@property (nonatomic) int trackingType;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enableTrackingState:(_Bool)arg1;

@end
