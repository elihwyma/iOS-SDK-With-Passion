/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKArtworkDataSourceCache, NSString;

@protocol GEOTransitArtworkDataSource;

@interface MKSizedTransitArtwork : NSObject

{
    id <GEOTransitArtworkDataSource> _artwork;
    long long _shieldSize;
    MKArtworkDataSourceCache *_artworkCache;
}

@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> artwork;
@property (nonatomic, readonly) long long shieldSize;
@property (retain, nonatomic) MKArtworkDataSourceCache *artworkCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3;
- (_Bool)isEqualToTransitArtworkViewMode:(id)arg1;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2;

@end
