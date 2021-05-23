/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAsset.h>

@class AVCompositionInternal, NSArray, NSDictionary;

@interface AVComposition : AVAsset

{
    AVCompositionInternal *_priv;
}

@property (nonatomic, readonly) NSArray *tracks;
@property (nonatomic, readonly) struct CGSize naturalSize;
@property (copy, nonatomic, readonly) NSDictionary *URLAssetInitializationOptions;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (_Bool)expectsPropertyRevisedNotifications;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (struct OpaqueFigAsset *)_figAsset;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (id)trackWithTrackID:(int)arg1;
- (id)_mediaSelectionGroupDictionaries;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (int)_createEmptyMutableCompositionIfNeeded;
- (id)_initWithComposition:(id)arg1;
- (void)_loadAssetInspectorAndLoaderOnce;
- (id)_newTrackForIndex:(long long)arg1;
- (id)_mutableTracks;
- (_Bool)_clientProvidesNaturalSize;
- (void)_setNaturalSize:(struct CGSize)arg1;
- (_Bool)_setURLAssetInitializationOptions:(id)arg1 error:(id *)arg2;

@end
