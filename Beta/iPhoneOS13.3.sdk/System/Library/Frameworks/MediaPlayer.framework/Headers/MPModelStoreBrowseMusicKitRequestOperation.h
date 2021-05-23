/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSIndexSet;

@interface MPModelStoreBrowseMusicKitRequestOperation : MPStoreModelRequestOperation

{
    NSIndexSet *_carPlayWhitelistedFCKinds;
}

- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_produceResponseWithParser:(id)arg1 results:(id)arg2 error:(id *)arg3;
- (id)browseURLWithStoreBagDictionary:(id)arg1;
- (id)radioGenresURLWithStoreBagDictionary:(id)arg1;

@end
