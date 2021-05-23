/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MPStoreOfferMediaItemArtworkDescriptor : NSObject

{
    long long _itemPersistentID;
    NSDictionary *_screenshotURLs;
    NSDictionary *_itemArtworkURLs;
    NSDictionary *_containerArtworkURLs;
    NSArray *_screenshotSizes;
    NSArray *_itemArtworkSizes;
    NSArray *_containerArtworkSizes;
    unsigned long long _hash;
    NSString *_cacheID;
}

@property (nonatomic, readonly) NSString *cacheID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringRepresentation;
- (id)initWithItemPersistentID:(long long)arg1 screenshotDictionaries:(id)arg2 itemArtworkDictionaries:(id)arg3 containerArtworkDictionaries:(id)arg4;
- (id)artworkURLForSize:(struct CGSize)arg1 type:(long long)arg2;
- (id)availableSizesForArtworkOfType:(long long)arg1;
- (id)_preferredArtworkURLsForType:(long long)arg1;
- (id)_availableSizesForArtworkURLs:(id)arg1;
- (id)_sizeToURLDictionaryFromStoreDictionariesArray:(id)arg1;

@end
