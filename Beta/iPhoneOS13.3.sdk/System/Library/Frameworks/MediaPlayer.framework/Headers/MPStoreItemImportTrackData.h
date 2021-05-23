/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MusicLibrary/ML3StoreItemTrackData.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MPStoreItemImportTrackData : ML3StoreItemTrackData

{
    NSArray *_importElements;
}

@property (nonatomic, readonly) NSArray *importElements;

+ (id)_importPropertiesDictFromImportMetadataDict:(id)arg1;

- (id)initWithImportElements:(id)arg1;
- (id)parsedStoreItemsImportProperties;
- (id)_associatedElementForPropertyDict:(id)arg1;

@end
