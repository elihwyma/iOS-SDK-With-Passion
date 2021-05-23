/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject

{
    id _catalogIdentifier;
    struct CGSize _representationSize;
}

@property (copy, nonatomic) id catalogIdentifier;
@property (nonatomic) struct CGSize representationSize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithArtworkCatalog:(id)arg1 representativeSize:(struct CGSize)arg2;

@end
