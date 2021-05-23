/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class CIContext, CIImage;

__attribute__((visibility("hidden")))
@interface CIPerspectiveAutoCalc : NSObject

{
    CIImage *img;
    CIContext *ctx;
    CDStruct_58ac58eb config;
    double pitch;
    double yaw;
    double roll;
    double confidence;
    CIImage *debugImage;
    long long pitchFailureReason;
    long long yawFailureReason;
    _Bool generateDebugImage;
}

@property (readonly) double pitch;
@property (readonly) double yaw;
@property (readonly) double roll;
@property (readonly) double confidence;
@property _Bool generateDebugImage;
@property (readonly) CIImage *debugImage;
@property (readonly) long long pitchFailureReason;
@property (readonly) long long yawFailureReason;

- (void)dealloc;
- (id)initWithContext:(id)arg1 image:(id)arg2 config:(const CDStruct_58ac58eb *)arg3;
- (_Bool)compute;

@end
