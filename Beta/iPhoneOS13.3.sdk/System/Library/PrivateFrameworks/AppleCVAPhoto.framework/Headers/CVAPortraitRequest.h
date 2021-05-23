/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class CVAMattingRequest, NSData, NSString;

@protocol CVAPortraitGenericRequest;

@interface CVAPortraitRequest : NSObject

{
    int _relightingCondition;
    float _colorCubeIntensity;
    float _simulatedFocalRatio;
    float _sourceColorGain;
    float _sourceColorLux;
    CVAMattingRequest *_mattingRequest;
    struct __CVBuffer *_destinationColorPixelBuffer;
    id <CVAPortraitGenericRequest> _parentGenericRequestFrom;
    id <CVAPortraitGenericRequest> _parentGenericRequestTo;
    NSData *_backgroundColorCube;
    NSData *_foregroundColorCube;
}

@property (readonly) int relightingCondition;
@property (readonly) NSData *backgroundColorCube;
@property (readonly) NSData *foregroundColorCube;
@property (readonly) float colorCubeIntensity;
@property (readonly) float simulatedFocalRatio;
@property (readonly) float sourceColorGain;
@property (readonly) float sourceColorLux;
@property (readonly) CVAMattingRequest *mattingRequest;
@property (readonly) struct __CVBuffer *destinationColorPixelBuffer;
@property (retain) id <CVAPortraitGenericRequest> parentGenericRequestFrom;
@property (retain) id <CVAPortraitGenericRequest> parentGenericRequestTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer *)arg2 backgroundColorCube:(id)arg3 foregroundColorCube:(id)arg4 colorCubeIntensity:(float)arg5 simulatedFocalRatio:(float)arg6 sourceColorGain:(float)arg7 sourceColorLux:(float)arg8;

@end
