/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray;

@protocol NSCopying;

@interface MPTiledArtworkRequest : NSObject <Swift>

{
    struct os_unfair_lock_s _cacheLock;
    NSArray *_artworkCatalogsCache;
    long long _artworkCatalogsCacheCount;
    _Bool _allowsSynchronousArtworkCatalogsBlockExecution;
    CDUnknownBlockType _artworkCatalogsBlock;
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    double _tileSpacing;
    id <NSCopying> _entityIdentifier;
    id <NSCopying> _namespaceIdentifier;
    id <NSCopying> _revisionIdentifier;
}

@property (copy, nonatomic) CDUnknownBlockType artworkCatalogsBlock;
@property (nonatomic) _Bool allowsSynchronousArtworkCatalogsBlockExecution;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) double tileSpacing;
@property (copy, nonatomic) id <NSCopying> entityIdentifier;
@property (copy, nonatomic) id <NSCopying> namespaceIdentifier;
@property (copy, nonatomic) id <NSCopying> revisionIdentifier;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)artworkCatalogsWithCount:(unsigned long long)arg1;
- (id)existingArtworkCatalogsWithCount:(long long)arg1;
- (_Bool)hasExistingArtworkCatalogsWithCount:(long long)arg1;

@end
