/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICCloudItemIDList;

@interface MPCloudControllerItemIDList : NSObject

{
    ICCloudItemIDList *_cloudItemIDList;
}

+ (id)cloudItemIDListForPlaylist:(id)arg1;

- (id)init;
- (void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2;
- (void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3;
- (id)ICCloudItemIDList;

@end
