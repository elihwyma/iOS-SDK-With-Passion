/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NMSAudiobookCacheItemMetadata : NSObject

{
    double _cachedStartTime;
    double _cachedDuration;
}

@property (nonatomic) double cachedStartTime;
@property (nonatomic) double cachedDuration;

+ (id)metaDataForMediaItem:(id)arg1;

- (_Bool)_loadForMediaItem:(id)arg1;
- (id)_baseDirectoryForMediaItem:(id)arg1;

@end
