/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPNondurableMediaItem.h>

@class MPStoreItemMetadata;

@interface MPStorePlatformMediaItem : MPNondurableMediaItem

{
    MPStoreItemMetadata *_storeItemMetadata;
}

@property (retain, nonatomic) MPStoreItemMetadata *storeItemMetadata;

+ (_Bool)supportsSecureCoding;
+ (id)defaultPropertyValues;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)artworkCatalog;
- (id)initWithStoreItemMetadata:(id)arg1;
- (id)_valueFromMetadataForProperty:(id)arg1;

@end
