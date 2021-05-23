/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PFMediaCapabilities, PHMediaFormatConversionManager;

@interface PLPTPLegacyConversionSupport : NSObject

{
    PHMediaFormatConversionManager *_mediaFormatConversionManager;
    PFMediaCapabilities *_peerMediaCapabilities;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool penultimateIsPublic;
@property (nonatomic, readonly) _Bool peerSupportsTranscodeChoice;
@property (nonatomic, readonly) _Bool peerSupportsAdjustmentBaseResources;

- (id)init;
- (id)conversionResultForAsset:(id)arg1 isVideo:(_Bool)arg2 isRender:(_Bool)arg3 forceLegacyConversion:(_Bool)arg4;

@end
