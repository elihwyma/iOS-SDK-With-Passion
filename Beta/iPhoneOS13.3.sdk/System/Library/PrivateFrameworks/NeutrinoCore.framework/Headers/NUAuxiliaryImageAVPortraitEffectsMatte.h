/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class AVPortraitEffectsMatte, NSString;

@interface NUAuxiliaryImageAVPortraitEffectsMatte : NSObject

{
    long long _auxiliaryImageType;
    AVPortraitEffectsMatte *_avPortraitEffectsMatte;
}

@property (readonly) AVPortraitEffectsMatte *avPortraitEffectsMatte;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long auxiliaryImageType;

- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
- (id)underlyingAVPortraitEffectsMatte;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (struct __CVBuffer *)cvPixelBufferRef;
- (id)initAuxiliaryImageFromAVPortraitEffectMatte:(id)arg1;

@end
