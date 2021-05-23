/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ML3ArtworkConfiguration;

@interface MPArtworkConfiguration : NSObject

{
    ML3ArtworkConfiguration *_artworkConfiguration;
}

@property (retain, nonatomic) ML3ArtworkConfiguration *artworkConfiguration;

+ (id)systemConfiguration;

- (id)description;
- (id)initWithConfigurationDictionaries:(id)arg1;
- (id)supportedSizesForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2;
- (id)sizesToAutogenerateForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2;

@end
