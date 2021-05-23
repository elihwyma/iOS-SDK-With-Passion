/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class CVAMattingRequest, NSData, NSString;

@protocol CVAPortraitGenericRequest;

@interface CVAPortraitRequest_StageLight : NSObject

{
    float _vignetteIntensity;
    float _stageLightIntensity;
    CVAMattingRequest *_mattingRequest;
    struct __CVBuffer *_destinationColorPixelBuffer;
    NSData *_proxyCubeData;
    NSData *_cubeData;
    id <CVAPortraitGenericRequest> _parentGenericRequestFrom;
    id <CVAPortraitGenericRequest> _parentGenericRequestTo;
}

@property (readonly) CVAMattingRequest *mattingRequest;
@property (readonly) struct __CVBuffer *destinationColorPixelBuffer;
@property (readonly) NSData *proxyCubeData;
@property (readonly) NSData *cubeData;
@property (readonly) float vignetteIntensity;
@property (readonly) float stageLightIntensity;
@property (retain) id <CVAPortraitGenericRequest> parentGenericRequestFrom;
@property (retain) id <CVAPortraitGenericRequest> parentGenericRequestTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer *)arg2 proxyCubeData:(id)arg3 cubeData:(id)arg4 vignetteIntensity:(float)arg5 stageLightIntensity:(float)arg6;

@end
