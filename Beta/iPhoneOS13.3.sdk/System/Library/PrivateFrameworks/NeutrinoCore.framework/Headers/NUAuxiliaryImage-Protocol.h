/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@protocol NUAuxiliaryImage <Swift>

@property (readonly) long long auxiliaryImageType;

- (unsigned short)pixelFormatType;
- (unsigned short)dictionaryRepresentationForAuxiliaryDataType: /* Error: Ran out of types for this method. */;
- (unsigned short)auxiliaryImageByApplyingExifOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:error: /* Error: Ran out of types for this method. */;
- (unsigned short)cvPixelBufferRef;

@end
