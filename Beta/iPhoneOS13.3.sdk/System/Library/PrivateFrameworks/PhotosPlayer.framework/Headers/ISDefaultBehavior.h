/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISBehavior.h>

__attribute__((visibility("hidden")))
@interface ISDefaultBehavior : ISBehavior

- (long long)behaviorType;
- (void)activeDidChange;
- (void)_showPhoto;

@end
