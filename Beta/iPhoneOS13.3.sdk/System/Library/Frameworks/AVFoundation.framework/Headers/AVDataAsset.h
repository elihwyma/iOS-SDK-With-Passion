/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAsset.h>

@class AVAssetInspectorLoader, AVDispatchOnce, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVDataAsset : AVAsset

{
    NSDictionary *_initializationOptions;
    AVAssetInspectorLoader *_loader;
    AVDispatchOnce *_allocateTracksOnceOnly;
    NSArray *_tracks;
}

+ (unsigned long long)_dataLengthLimit;
+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long *)arg2;

- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)tracks;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (unsigned long long)referenceRestrictions;

@end
