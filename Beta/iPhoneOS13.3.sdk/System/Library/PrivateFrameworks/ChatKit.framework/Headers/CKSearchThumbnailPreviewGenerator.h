/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableSet;

@interface CKSearchThumbnailPreviewGenerator : NSObject

{
    NSCache *_thumbnailCache;
    NSCache *_livePhotoStatusCache;
    NSCache *_videoDurationCache;
    NSCache *_lpLinkMetadataCache;
    NSCache *_mapHashesCache;
    NSMutableSet *_keysWithInFlightGeneration;
    NSMutableSet *_keysWithInFlightLivePhotoStatus;
    NSMutableSet *_keysWithInFlightVideoDurationCalculation;
    NSMutableSet *_keysWithInFlightLPLinkMetadataGeneration;
}

@property (retain, nonatomic) NSCache *thumbnailCache;
@property (retain, nonatomic) NSCache *livePhotoStatusCache;
@property (retain, nonatomic) NSCache *videoDurationCache;
@property (retain, nonatomic) NSCache *lpLinkMetadataCache;
@property (retain, nonatomic) NSCache *mapHashesCache;
@property (retain, nonatomic) NSMutableSet *keysWithInFlightGeneration;
@property (retain, nonatomic) NSMutableSet *keysWithInFlightLivePhotoStatus;
@property (retain, nonatomic) NSMutableSet *keysWithInFlightVideoDurationCalculation;
@property (retain, nonatomic) NSMutableSet *keysWithInFlightLPLinkMetadataGeneration;

+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;

- (id)init;
- (id)linkMetadataForQueryResult:(id)arg1;
- (void)_IMSPIQueryMessageItemsWithGUIDs:(id)arg1 results:(CDUnknownBlockType)arg2;
- (id)previewForQueryResult:(id)arg1;
- (id)mapPreviewForQueryResult:(id)arg1 traitCollection:(id)arg2;
- (id)cachedPreviewForQueryResult:(id)arg1;
- (id)cachedMapPreviewForQueryResult:(id)arg1 traitCollection:(id)arg2;
- (id)cachedLinkMetadataForQueryResult:(id)arg1;
- (Class)_qlThumbnailGenerationRequestClass;
- (id)_qlThumbnailGeneratorSharedGenerator;
- (id)_previewURLForKey:(id)arg1;
- (void)_persistPreview:(id)arg1 atURL:(id)arg2;
- (void)generateAndCacheIconWithURL:(id)arg1 key:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateAndCacheThumbnailWithURL:(id)arg1 request:(id)arg2 key:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_checkResultForLivePhotoComplement:(id)arg1;
- (CDStruct_1b6d18a9)_calculateDurationForVideoResult:(id)arg1;
- (void)_asyncLoadCachedDiskPreviewForKeyIfAvailable:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateAndCachePassWithURL:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_generateMapThumbnailForKey:(id)arg1 attributes:(id)arg2 traitCollection:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_markFileAsPurgeable:(id)arg1;
- (void)_prewarmLinkMetadata:(id)arg1;
- (_Bool)queryResultHasLivePhoto:(id)arg1;
- (_Bool)queryResultIsVideo:(id)arg1;
- (CDStruct_1b6d18a9)durationForVideoResult:(id)arg1;
- (id)mapPlaceholderImageForTraitCollection:(id)arg1;

@end
