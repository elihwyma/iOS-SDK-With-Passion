/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class AVMetadataFaceObject, AVMetadataObject, NSString;

@interface CAMFaceResult : NSObject

{
    NSString *_uniqueIdentifier;
    double _rollAngle;
    AVMetadataFaceObject *_underlyingFaceObject;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) double rollAngle;
@property (nonatomic, readonly) AVMetadataFaceObject *underlyingFaceObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *metadataType;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) AVMetadataObject *underlyingMetadataObject;

- (id)initWithFaceObject:(id)arg1;
- (id)burstMetadataRepresentation;

@end
