/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface _UIFocusSoundPool : NSObject

{
    NSURL *_soundFileURL;
    unsigned int _originalSystemSoundID;
    NSArray *_queue;
    unsigned long long _queueIndex;
}

- (id)initWithSystemSoundID:(unsigned int)arg1;
- (id)initWithSoundFileURL:(id)arg1;
- (unsigned int)playableSystemSoundID;

@end
