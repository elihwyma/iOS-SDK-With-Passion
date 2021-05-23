/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARCamera, NSArray, NSString;

@interface ARImageDetectionResultData : NSObject <Swift>

{
    _Bool _detectionOnly;
    _Bool _predicted;
    _Bool _providesWorldTrackingCameraPose;
    ARCamera *_currentCamera;
    NSArray *_detectedImages;
}

@property (nonatomic) _Bool detectionOnly;
@property (nonatomic) _Bool predicted;
@property (nonatomic) _Bool providesWorldTrackingCameraPose;
@property (copy, nonatomic) ARCamera *currentCamera;
@property (copy, nonatomic) NSArray *detectedImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)anchorsForCameraWithTransform:(CDStruct_14d5dc5e)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;

@end
