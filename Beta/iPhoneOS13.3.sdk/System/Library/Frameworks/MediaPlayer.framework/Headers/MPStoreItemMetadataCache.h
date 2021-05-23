/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class CPLRUDictionary, NSMapTable;

@interface MPStoreItemMetadataCache : NSObject

{
    CPLRUDictionary *_itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
    NSMapTable *_itemIdentifierToCompositeStoreItemMetadataMapTable;
}

@property (nonatomic, readonly) long long count;

- (id)initWithCacheSize:(long long)arg1;
- (id)addMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (id)metadataForItemIdentifier:(id)arg1;
- (id)metadataForItemIdentifier:(id)arg1 ignoreExpiration:(_Bool)arg2;
- (void)removeExpiredMetadata;

@end
