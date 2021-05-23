/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PICompositionExporter : NSObject

+ (void)setMetadataConverter:(id)arg1;
+ (id)resetImageProperties:(id)arg1 preserveRegions:(_Bool)arg2;
+ (id)metadataConverter;

- (id)init;
- (void)exportImageToDataWithComposition:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)exportVideoToURL:(id)arg1 composition:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)exportComposition:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)exportImageToURL:(id)arg1 composition:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)exportComposition:(id)arg1 toPrimaryURL:(id)arg2 videoComplementURL:(id)arg3 videoPosterFrameURL:(id)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)variationForFlavor:(id)arg1;
- (void)prepareImageExportRequest:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareAuxiliaryImagesFetchProperties:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)addImageProperties:(id)arg1 composition:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)_prepareToExportVideo:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)addVideoProperties:(id)arg1 composition:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)shouldTryVideoRotationFastPath:(id)arg1 options:(id)arg2;
- (void)_exportVideoToURL:(id)arg1 composition:(id)arg2 options:(id)arg3 metadata:(id)arg4 progress:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_exportVideoToURLFull:(id)arg1 composition:(id)arg2 options:(id)arg3 metadata:(id)arg4 progress:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end
