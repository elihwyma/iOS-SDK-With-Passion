/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreItemLibraryImportElement.h>

@class ICStorePlatformMetadata, NSDictionary;

@interface MPStoreItemLibraryImportLookupElement : MPStoreItemLibraryImportElement

{
    ICStorePlatformMetadata *_storeItem;
    NSDictionary *_lookupDictionary;
}

@property (nonatomic, readonly) NSDictionary *lookupDictionary;

- (id)storeItem;
- (id)initWithLookupDictionary:(id)arg1 additionalTrackMetadata:(id)arg2;

@end
