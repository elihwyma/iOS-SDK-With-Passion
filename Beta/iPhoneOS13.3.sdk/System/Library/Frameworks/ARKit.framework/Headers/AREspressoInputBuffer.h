/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARImageData;

@interface AREspressoInputBuffer : NSObject

{
    _Bool _isValid;
    ARImageData *_imageDataForNeuralNetwork;
    ARImageData *_originalImageData;
    long long _rotationOfResultTensor;
    struct CGSize _regionOfInterest;
}

@property (nonatomic) _Bool isValid;
@property (retain) ARImageData *imageDataForNeuralNetwork;
@property (retain) ARImageData *originalImageData;
@property (nonatomic) struct CGSize regionOfInterest;
@property (nonatomic) long long rotationOfResultTensor;

@end
