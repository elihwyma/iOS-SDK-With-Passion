/*
 Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface REAudioManagerNotificationListener : NSObject

{
    struct AudioManager_AVAudioEngine *_owner;
}

- (id)initWithOwner:(void *)arg1;
- (void)sessionInterrupted:(id)arg1;
- (void)engineInterrupted:(id)arg1;

@end
