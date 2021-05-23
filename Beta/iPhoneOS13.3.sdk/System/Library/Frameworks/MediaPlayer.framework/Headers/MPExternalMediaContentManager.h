/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface MPExternalMediaContentManager : NSObject

+ (id)sharedManager;

- (id)init;
- (id)_init;
- (void)deletePlaybackActivityWithIdentifier:(id)arg1;

@end
