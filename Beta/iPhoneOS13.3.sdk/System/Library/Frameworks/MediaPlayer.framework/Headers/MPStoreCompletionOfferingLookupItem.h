/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaQuery, NSNumber, NSString;

@interface MPStoreCompletionOfferingLookupItem : NSObject

{
    _Bool _wantsArtwork;
    MPMediaQuery *_albumItemsQuery;
    unsigned long long _tokenID;
    CDUnknownBlockType _responseBlock;
    NSNumber *_storeLookupID;
}

@property (nonatomic, readonly) MPMediaQuery *albumItemsQuery;
@property (nonatomic, readonly) _Bool wantsArtwork;
@property (nonatomic, readonly) unsigned long long tokenID;
@property (copy, nonatomic, readonly) CDUnknownBlockType responseBlock;
@property (nonatomic, readonly) NSNumber *storeLookupID;
@property (nonatomic, readonly) NSString *storeLookupIDString;

+ (id)storeLookupIDForAlbumItemsQuery:(id)arg1;

- (id)initWithAlbumItemsQuery:(id)arg1 tokenID:(long long)arg2 wantsArtwork:(_Bool)arg3 responseBlock:(CDUnknownBlockType)arg4;
- (id)lookupRequestForStorePlaylistIdentifier:(id)arg1;
- (id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1;
- (id)newLookupRequest;
- (id)_specificationForArtworkSizesToRequest;

@end
