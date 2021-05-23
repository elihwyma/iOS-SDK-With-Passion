/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Movie.h>

__attribute__((visibility("hidden")))
@interface KenBurnsMovie : Movie

- (int)duration;
- (double)durationInSeconds;
- (void)updateLocation;
- (void)resetAssetAvailability;
- (void)updateAssetAvailability;
- (_Bool)titleIsLocalizable;
- (_Bool)isKenBurnsMovie;

@end
