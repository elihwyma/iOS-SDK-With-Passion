/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <AVFoundation/AVURLAsset.h>

@interface AVURLAsset (RCAdditions)

@property (nonatomic, readonly) double rc_durationInSeconds;

+ (id)rc_preciseTimingAssetWithURL:(id)arg1;

@end
