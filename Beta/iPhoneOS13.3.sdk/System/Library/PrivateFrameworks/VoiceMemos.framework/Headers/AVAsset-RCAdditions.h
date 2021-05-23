/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <AVFoundation/AVAsset.h>

@class AVAssetTrack, NSDictionary, NSURL;

@interface AVAsset (RCAdditions)

@property (retain, nonatomic, setter=rc_setComposedAVURL:) NSURL *rc_composedAVURL;
@property (nonatomic, readonly) AVAssetTrack *rc_audioTrack;
@property (nonatomic, readonly) NSDictionary *rc_recordingMetadata;

+ (_Bool)rc_updateMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id *)arg3;

@end
