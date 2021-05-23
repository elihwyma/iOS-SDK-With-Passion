/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSCache, NSString;

@protocol MPArtworkDataSource, MPArtworkDataSourceVisualIdenticality;

@interface MPArtworkCatalog : NSObject

{
    struct CGSize _fittingSize;
    long long _modelRevisionID;
    _Bool _loadingRepresentation;
    double _destinationScale;
    NSString *_cacheIdentifier;
    id _requestingContext;
    id _destination;
    CDUnknownBlockType _configurationBlock;
    id _token;
    id <MPArtworkDataSource> _dataSource;
    unsigned long long _renderHint;
}

@property (nonatomic, readonly) long long MP_artworkType;
@property (copy, nonatomic) NSString *cacheIdentifier;
@property (weak, nonatomic) id requestingContext;
@property (weak, nonatomic) id destination;
@property (copy, nonatomic) CDUnknownBlockType configurationBlock;
@property (getter=isLoadingRepresentation) _Bool loadingRepresentation;
@property (retain, nonatomic) id token;
@property (weak, nonatomic) id <MPArtworkDataSource> dataSource;
@property (nonatomic, readonly) NSCache *cache;
@property (nonatomic, readonly) id <MPArtworkDataSourceVisualIdenticality> visualIdenticalityIdentifier;
@property (nonatomic) unsigned long long renderHint;
@property (nonatomic) double destinationScale;
@property (nonatomic) struct CGSize fittingSize;
@property (nonatomic, readonly) struct CGSize scaledFittingSize;
@property (nonatomic, readonly) _Bool hasImageOnDisk;

+ (id)_artworkLoadQueue;
+ (id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2;
+ (id)staticArtworkCatalogWithImage:(id)arg1;
+ (void)setCacheLimit:(long long)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (void)setCachePurgesWhenEnteringBackground:(_Bool)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithToken:(id)arg1 dataSource:(id)arg2;
- (void)requestImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)bestImageFromDisk;
- (void)setDestination:(id)arg1 configurationBlock:(CDUnknownBlockType)arg2;
- (void)setDestination:(id)arg1 progressiveConfigurationBlock:(CDUnknownBlockType)arg2;
- (_Bool)isArtworkVisuallyIdenticalToCatalog:(id)arg1;
- (id)existingColorAnalysisWithAlgorithm:(long long)arg1;
- (void)requestColorAnalysisWithAlgorithm:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestFocusRegionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestRadiosityImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestExportableArtworkURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestExportableArtworkPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2;
- (void)_loadBestRepresentationIfNeeded;
- (void)_updateRepresentation;
- (void)_updateWithRepresentation:(id)arg1 isBestRepresentation:(_Bool)arg2 modelRevisionID:(long long)arg3;

@end
