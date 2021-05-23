/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPTiledArtworkRepresentationCacheKey : NSObject

{
    id _entityIdentifier;
    id _namespaceIdentifier;
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    id _revisionIdentifier;
    struct CGSize _scaledFittingSize;
    double _tileSpacing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringRepresentation;
- (id)initWithTiledArtworkRequest:(id)arg1 scaledFittingSize:(struct CGSize)arg2;

@end
