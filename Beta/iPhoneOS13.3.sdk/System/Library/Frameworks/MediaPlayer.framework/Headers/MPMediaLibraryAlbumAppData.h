/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface MPMediaLibraryAlbumAppData : NSObject

{
    long long _version;
    NSDictionary *_appDataDict;
    NSMutableDictionary *_dirtyPopularityDict;
}

@property (nonatomic, readonly) long long version;

- (id)init;
- (id)initWithAppDataDictionary:(id)arg1;
- (void)setSongPopularity:(id)arg1 forIdentifierSet:(id)arg2;
- (id)songPopularityForIdentifiers:(id)arg1;
- (void)setSongPopularity:(id)arg1 forAdamID:(long long)arg2;
- (id)songPopularityForAdamID:(long long)arg1;
- (id)createAppDataDictionary;

@end
