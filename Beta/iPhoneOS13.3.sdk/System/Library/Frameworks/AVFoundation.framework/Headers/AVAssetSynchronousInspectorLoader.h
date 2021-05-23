/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetInspector;

__attribute__((visibility("hidden")))
@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader

{
    AVAssetInspector *_assetInspector;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (CDStruct_1b6d18a9)duration;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)lyrics;
- (_Bool)isPlayable;
- (_Bool)isExportable;
- (_Bool)isReadable;
- (_Bool)isComposable;
- (_Bool)isCompatibleWithSavedPhotosAlbum;
- (id)assetInspector;
- (id)initWithAssetInspector:(id)arg1;

@end
