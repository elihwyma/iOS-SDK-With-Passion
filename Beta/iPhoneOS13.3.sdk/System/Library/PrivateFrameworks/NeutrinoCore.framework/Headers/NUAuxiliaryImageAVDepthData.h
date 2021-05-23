/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class AVDepthData, NSString;

@interface NUAuxiliaryImageAVDepthData : NSObject

{
    long long _auxiliaryImageType;
    AVDepthData *_avDepthData;
}

@property (readonly) AVDepthData *avDepthData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long auxiliaryImageType;

- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
- (id)underlyingAVDepthData;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (struct __CVBuffer *)cvPixelBufferRef;
- (id)initAuxiliaryImageFromAVDepthData:(id)arg1;

@end
