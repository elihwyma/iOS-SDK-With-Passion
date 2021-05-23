/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@interface TUDTMFSoundPlayer : NSObject

{
    CDUnknownBlockType _playSystemSoundHandler;
}

@property (copy, nonatomic) CDUnknownBlockType playSystemSoundHandler;

- (id)init;
- (void)attemptToPlaySoundType:(long long)arg1;
- (_Bool)attemptToPlayKey:(unsigned char)arg1;

@end
