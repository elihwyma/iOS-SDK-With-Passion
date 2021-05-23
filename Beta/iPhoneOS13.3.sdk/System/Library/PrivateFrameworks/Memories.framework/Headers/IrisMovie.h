/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VideoMovie.h>

__attribute__((visibility("hidden")))
@interface IrisMovie : VideoMovie

{
    CDStruct_1b6d18a9 _cachedPreciseAssetStart;
}

@property (nonatomic) CDStruct_1b6d18a9 cachedPreciseAssetStart;
@property (nonatomic, readonly) _Bool front;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)duration;
- (CDStruct_1b6d18a9)startTime;
- (void)cacheVideoTrackInformationOfAsset:(id)arg1;
- (id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 front:(_Bool)arg3;

@end
