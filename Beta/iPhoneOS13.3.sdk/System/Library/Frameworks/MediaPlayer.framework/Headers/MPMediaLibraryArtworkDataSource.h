/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPArtworkResizeUtility, NSCache, NSString;

@interface MPMediaLibraryArtworkDataSource : NSObject

{
    _Bool _usesFallbackCache;
    NSCache *_fallbackCache;
    MPArtworkResizeUtility *_artworkResizeUtility;
}

@property (retain, nonatomic) NSCache *fallbackCache;
@property (retain, nonatomic) MPArtworkResizeUtility *artworkResizeUtility;
@property (nonatomic) _Bool usesFallbackCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)hasExistingRepresentationOnDiskForArtworkCatalog:(id)arg1;
- (void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (id)_existingRepresentationForArtworkCatalog:(id)arg1 fromCacheOnly:(_Bool)arg2;
- (void)_resizeOriginalArtworkForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2;
- (id)_cachedRepresentationForCatalog:(id)arg1;
- (_Bool)_isRepresentation:(id)arg1 validForCatalog:(id)arg2;
- (_Bool)_isRepresentationSize:(struct CGSize)arg1 validForFittingSize:(struct CGSize)arg2;
- (id)_representationAtSize:(struct CGSize)arg1 forCatalog:(id)arg2;
- (id)_resizeArtwork:(id)arg1 forCatalog:(id)arg2 toSize:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
