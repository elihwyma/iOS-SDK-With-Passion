/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@interface OKSoundEffect : NSObject

{
    unsigned int _soundID;
}

+ (void)playSoundEffectAtURL:(id)arg1;
+ (id)soundEffectAtURL:(id)arg1;

- (void)dealloc;
- (void)play;
- (id)initWithSoundURL:(id)arg1;

@end
