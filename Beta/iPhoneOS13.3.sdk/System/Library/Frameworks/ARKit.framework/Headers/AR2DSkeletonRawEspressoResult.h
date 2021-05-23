/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARImageData, NSString;

@interface AR2DSkeletonRawEspressoResult : NSObject <Swift>

{
    void *_outputTensors;
    unsigned long long _numberOfOutputTensors;
    ARImageData *_imageDataForNeuralNetwork;
    ARImageData *_inputImageData;
    long long _rotationNeeded;
    struct CGSize _regionOfInterest;
}

@property (nonatomic) void *outputTensors;
@property (nonatomic) unsigned long long numberOfOutputTensors;
@property (retain, nonatomic) ARImageData *imageDataForNeuralNetwork;
@property (retain, nonatomic) ARImageData *inputImageData;
@property (nonatomic) long long rotationNeeded;
@property (nonatomic) struct CGSize regionOfInterest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
