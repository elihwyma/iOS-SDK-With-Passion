/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CFXMediaItemAdjustmentsData : NSObject

{
    long long _cameraMode;
    NSArray *_effectStack;
}

@property (nonatomic, readonly) long long cameraMode;
@property (nonatomic, readonly) NSArray *effectStack;

+ (_Bool)supportsSecureCoding;
+ (id)secureCodingClassWhitelist;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCameraMode:(long long)arg1 effectStack:(id)arg2;

@end
