/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARVideoFormat, ARWorldTrackingState, NSDictionary, NSString;

@interface ARWorldTrackingPoseData : NSObject <Swift>

{
    double _timestamp;
    ARWorldTrackingState *_worldTrackingState;
    NSDictionary *_vioStateDetails;
    ARVideoFormat *_currentlyActiveVideoFormat;
    long long _worldMappingStatus;
    CDStruct_14d5dc5e _visionCameraTransform;
    CDStruct_14d5dc5e _cameraTransform;
}

@property (nonatomic) double timestamp;
@property (nonatomic) CDStruct_14d5dc5e visionCameraTransform;
@property (copy, nonatomic) ARWorldTrackingState *worldTrackingState;
@property (copy, nonatomic) NSDictionary *vioStateDetails;
@property (retain, nonatomic) ARVideoFormat *currentlyActiveVideoFormat;
@property (nonatomic) long long worldMappingStatus;
@property (nonatomic) CDStruct_14d5dc5e cameraTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;

@end
