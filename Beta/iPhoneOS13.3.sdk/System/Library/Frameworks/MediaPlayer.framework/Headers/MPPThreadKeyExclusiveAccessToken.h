/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface MPPThreadKeyExclusiveAccessToken : NSObject

{
    unsigned long long _key;
}

+ (id)tokenWithKey:(unsigned long long)arg1;

- (id)_init;
- (void)assertHasExclusiveAccess;

@end
