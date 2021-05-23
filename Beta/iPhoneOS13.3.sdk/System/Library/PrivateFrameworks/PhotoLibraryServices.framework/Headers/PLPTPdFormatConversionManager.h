/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, PFMediaCapabilities, PHMediaFormatConversionManager;

@interface PLPTPdFormatConversionManager : NSObject

{
    PFMediaCapabilities *_legacyCapabilities;
    _Bool _initialized;
    PFMediaCapabilities *_peerMediaCapabilities;
    PHMediaFormatConversionManager *_mediaFormatConversionManager;
    NSURL *_temporaryDirectoryURL;
    NSMutableDictionary *_convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
}

@property (retain) PHMediaFormatConversionManager *mediaFormatConversionManager;
@property (retain) NSURL *temporaryDirectoryURL;
@property (retain) NSMutableDictionary *convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
@property _Bool initialized;
@property (retain) PFMediaCapabilities *peerMediaCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool penultimateIsPublic;
@property (nonatomic, readonly) _Bool peerSupportsTranscodeChoice;
@property (nonatomic, readonly) _Bool peerSupportsAdjustmentBaseResources;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3;
- (id)conversionResultForAsset:(id)arg1 isVideo:(_Bool)arg2 isRender:(_Bool)arg3 forceLegacyConversion:(_Bool)arg4;
- (_Bool)setupTemporaryDirectory;
- (id)requestForOriginalAtPath:(id)arg1 isVideo:(_Bool)arg2 imageDimensions:(struct CGSize)arg3 originalPairingIdentifier:(id)arg4;
- (id)requestForRenderImagePath:(id)arg1 imageDimensions:(struct CGSize)arg2 outputFilename:(id)arg3;
- (id)requestForPath:(id)arg1 isVideo:(_Bool)arg2 imageDimensions:(struct CGSize)arg3;
- (id)sourceForPath:(id)arg1 isVideo:(_Bool)arg2 imageDimensions:(struct CGSize)arg3;
- (id)convertedAssetLivePhotoPairingIdentifierForOriginalIdentifier:(id)arg1;
- (_Bool)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id *)arg2 maximumSize:(struct CGSize)arg3 error:(id *)arg4;
- (id)effectivePeerMediaCapabilites;

@end
