/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <AVFoundation/AVAsset.h>

@class AVAssetTrack, NSString;

@interface AVAsset (Utilities)

@property (readonly) AVAssetTrack *mainVideoTrack;
@property (readonly) AVAssetTrack *mainAudioTrack;
@property (readonly) struct CGSize mainVideoTrackNaturalSize;
@property (readonly) struct CGSize mainVideoTrackPreferredSize;
@property (readonly) struct CGAffineTransform mainVideoTrackPreferredTransform;
@property (readonly) float mainVideoTrackNominalFrameRate;
@property (readonly) struct CGSize scaleFactors;
@property (readonly) NSString *localizedDisplayName;

- (id)commonMetadataStringValueForKey:(id)arg1;
- (_Bool)canPassthroughExport;
- (_Bool)valuesForKeysAreFinishedLoading:(id)arg1;
- (_Bool)isMarkedNotSerializable;

@end
