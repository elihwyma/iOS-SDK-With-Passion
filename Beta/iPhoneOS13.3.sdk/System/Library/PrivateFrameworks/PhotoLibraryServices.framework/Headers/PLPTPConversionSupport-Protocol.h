/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLPTPConversionSupport <Swift>

@property (nonatomic, readonly) _Bool penultimateIsPublic;
@property (nonatomic, readonly) _Bool peerSupportsTranscodeChoice;
@property (nonatomic, readonly) _Bool peerSupportsAdjustmentBaseResources;

- (unsigned short)conversionResultForAsset:isVideo:isRender:forceLegacyConversion: /* Error: Ran out of types for this method. */;

@end
