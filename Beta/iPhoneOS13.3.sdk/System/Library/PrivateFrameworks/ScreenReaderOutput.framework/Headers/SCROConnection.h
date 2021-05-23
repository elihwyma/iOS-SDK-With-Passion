/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@interface SCROConnection : NSObject

{
    unsigned int _pingPort;
    struct __CFRunLoopSource *_pingSource;
    struct __CFRunLoopSource *_invalidationSource;
    unsigned int _identifier;
    int _handlerType;
    id _delegate;
    _Atomic _Bool _isConnectionStarted;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (void)_createConnectionRunLoop;
+ (void)_configServer;
+ (void)_configServerWithMachServiceName:(char *)arg1;
+ (void)_unconfigServerAndRetry:(_Bool)arg1;
+ (_Bool)_inUnitTests;
+ (void)_addConnectionToRunLoop:(id)arg1;

- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)sendEvent:(id)arg1;
- (void)_startConnection;
- (void)_ping;
- (void)_stopConnection;
- (id)handlerValueForKey:(int)arg1;
- (id)initWithHandlerType:(int)arg1 delegate:(id)arg2;
- (int)registerHandlerCallbackForKey:(int)arg1;
- (int)setHandlerValue:(id)arg1 forKey:(int)arg2;
- (id)handlerArrayValueForKey:(int)arg1;
- (int)performHandlerActionForKey:(int)arg1;
- (id)handlerValueForKey:(int)arg1 withObject:(id)arg2;

@end
