/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class AVSemanticSegmentationMatte, NSString;

@interface NUAuxiliaryImageAVSemanticSegmentationMatte : NSObject

{
    long long _auxiliaryImageType;
    AVSemanticSegmentationMatte *_avSemanticSegmentationMatte;
}

@property (readonly) AVSemanticSegmentationMatte *avSemanticSegmentationMatte;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long auxiliaryImageType;

- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
- (id)underlyingAVSemanticSegmentationMatte;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (struct __CVBuffer *)cvPixelBufferRef;
- (id)initAuxiliaryImageFromAVSemanticSegmentationMatte:(id)arg1;

@end
