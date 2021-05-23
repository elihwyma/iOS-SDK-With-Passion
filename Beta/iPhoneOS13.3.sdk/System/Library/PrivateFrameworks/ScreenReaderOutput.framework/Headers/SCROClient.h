/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSLock;

@interface SCROClient : NSObject

{
    NSLock *_lock;
    unsigned int _identifier;
    unsigned int _port;
    int _pid;
    struct __CFArray *_queue;
    struct __CFSet *_callbackSet;
}

+ (void)initialize;
+ (id)addClientGetIdentifier:(unsigned int *)arg1 token:(CDStruct_6ad76789)arg2 getPort:(unsigned int *)arg3;
+ (long long)removeClientWithPort:(unsigned int)arg1;
+ (_Bool)isClientTrustedWithPortToken:(CDStruct_6ad76789)arg1;
+ (void)sendCallback:(id)arg1;
+ (id)callbacksForClientIdentifier:(unsigned int)arg1;
+ (void)registerCallbackWithKey:(int)arg1 forClientIdentifier:(unsigned int)arg2;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)_lock;
- (void)_unlock;
- (_Bool)_wantsCallback:(id)arg1;
- (void)_sendCallback:(id)arg1;
- (id)_dequeueCallbacks;
- (void)_registerCallbackWithKey:(int)arg1;

@end
