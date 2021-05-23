/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPStoreArtworkRequestToken, NSArray, NSDictionary, NSString;

@interface MPStoreItemMovieClip : NSObject

{
    NSDictionary *_lookupDictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *lookupDictionary;
@property (copy, nonatomic, readonly) NSArray *assets;
@property (copy, nonatomic, readonly) MPStoreArtworkRequestToken *previewArtworkRequestToken;
@property (copy, nonatomic, readonly) NSString *title;

- (id)initWithLookupDictionary:(id)arg1;

@end
