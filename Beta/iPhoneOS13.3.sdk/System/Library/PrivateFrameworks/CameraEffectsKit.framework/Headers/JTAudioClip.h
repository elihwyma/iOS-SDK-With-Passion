/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTClip.h>

@class NSURL;

@interface JTAudioClip : JTClip

@property (nonatomic, readonly) NSURL *mediaItemURL;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setDuration:(int)arg1;
- (void)setMediaItemURL:(id)arg1;

@end
