/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSLock;

@protocol SCROServerDelegate;

@interface SCROServer : NSObject

{
    NSLock *_contentLock;
    id <SCROServerDelegate> _delegate;
    struct __CFRunLoopSource *_serverSource;
    struct __CFRunLoopSource *_deathSource;
    struct __CFRunLoopTimer *_deathTimer;
    unsigned int _serverPort;
    unsigned int _deathPort;
    long long _clientCount;
    _Bool _isRegisteredWithMach;
}

+ (id)sharedServer;

- (id)init;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (struct __CFRunLoopSource *)serverSource;
- (long long)_clientCount;
- (struct __CFRunLoopTimer *)_deathTimer;
- (_Bool)_registerWithMachServiceName:(char *)arg1;
- (void)unregisterWithMach;
- (long long)_incrementClientCount;
- (void)_setClientCount:(long long)arg1;
- (int)_registerForNotificationOnDeathPort:(unsigned int)arg1;
- (_Bool)isRegisteredWithMach;
- (_Bool)registerWithMach;

@end
