/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKTransitArtworkManager, NSCache;

@interface MKArtworkDataSourceCache : NSObject

{
    NSCache *_artworkImageCache;
    MKTransitArtworkManager *_artworkManager;
}

@property (nonatomic, readonly) MKTransitArtworkManager *artworkManager;

+ (id)sharedInstance;

- (void)purge;
- (id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5;
- (id)initWithArtworkManager:(id)arg1;
- (void)_shieldPackDidUpdate;
- (id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5 widthPaddingMultiple:(double)arg6;
- (id)_lookupArtworkInCacheWithKey:(id)arg1;
- (void)_setArtworkImageInCache:(id)arg1 forKey:(id)arg2;
- (id)imageForSizedArtwork:(id)arg1 scale:(double)arg2 nightMode:(_Bool)arg3;

@end
