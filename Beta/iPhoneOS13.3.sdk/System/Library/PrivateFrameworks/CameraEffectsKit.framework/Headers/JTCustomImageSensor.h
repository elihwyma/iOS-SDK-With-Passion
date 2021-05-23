/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol ARSensorDelegate;

@interface JTCustomImageSensor : NSObject

{
    id <ARSensorDelegate> _delegate;
}

@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long powerUsage;

- (void)stop;
- (void)start;
- (unsigned long long)providedDataTypes;
- (void)createImageDataFromFrameSet:(id)arg1 captureDevice:(id)arg2 captureSession:(id)arg3 trackedFacesMetadata:(id)arg4 faceObjectsMetadata:(id)arg5;
- (void)outputSensorData:(id)arg1;

@end
