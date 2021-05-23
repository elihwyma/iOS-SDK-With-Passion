/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPKeyValueObserver : NSObject

{
    id _object;
    NSString *_keyPath;
    CDUnknownBlockType _handler;
}

@property (weak, nonatomic, readonly) id object;
@property (copy, nonatomic, readonly) NSString *keyPath;
@property (copy, nonatomic, readonly) CDUnknownBlockType handler;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;

@end
