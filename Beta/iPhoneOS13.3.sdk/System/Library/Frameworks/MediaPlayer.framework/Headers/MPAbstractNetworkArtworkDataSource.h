/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSString, NSURLSession, NSURLSessionConfiguration;

@protocol OS_dispatch_queue;

@interface MPAbstractNetworkArtworkDataSource : NSObject

{
    _Bool _usesFallbackCache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSCache *_fallbackArtworkRepresentationCache;
    NSMapTable *_catalogTaskMap;
    NSMutableDictionary *_pendingRequestToCompletionHandlers;
    NSURLSession *_URLSession;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSCache *fallbackArtworkRepresentationCache;
@property (retain, nonatomic) NSMapTable *catalogTaskMap;
@property (retain, nonatomic) NSMutableDictionary *pendingRequestToCompletionHandlers;
@property (retain, nonatomic) NSURLSession *URLSession;
@property (nonatomic, readonly) NSURLSessionConfiguration *URLSessionConfiguration;
@property (nonatomic) _Bool usesFallbackCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_applyURLCachePolicy:(unsigned long long)arg1 cacheDiskPath:(id)arg2 toConfiguration:(id)arg3;

- (id)init;
- (void)_performSyncBlock:(CDUnknownBlockType)arg1;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)supportedSizesForCatalog:(id)arg1;
- (void)updateURLSessionWithCachePolicy:(unsigned long long)arg1 cachePath:(id)arg2;
- (_Bool)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
- (_Bool)wantsBackgroundImageDecompression;
- (id)_artworkRepresentationWithImageFromData:(id)arg1 forURLResponse:(id)arg2 size:(struct CGSize)arg3 immediateImageDecompressionAllowed:(_Bool)arg4;
- (id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg1 immediateImageDecompressionAllowed:(_Bool)arg2;
- (_Bool)_isRepresentationSize:(struct CGSize)arg1 validForCatalog:(id)arg2;
- (id)_existingRepresentativeObjectForArtworkCatalog:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (void)_performAsyncBarrierBlock:(CDUnknownBlockType)arg1;

@end
