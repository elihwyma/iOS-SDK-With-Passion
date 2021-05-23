/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@protocol PLBasebandLogChannelDelegate;

@interface PLBasebandLogChannel : NSObject

{
    struct __CFMessagePort *remotePort;
    struct __CFMessagePort *localPort;
    _Bool cachingEnabled;
    id <PLBasebandLogChannelDelegate> delegate;
}

@property (nonatomic) id <PLBasebandLogChannelDelegate> delegate;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic) _Bool cachingEnabled;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)close;
- (void)flush;
- (void)connectionInvalidated:(id)arg1;
- (void)sendObjectOverRemotePort:(id)arg1;
- (_Bool)openWithConnection:(id)arg1;
- (void)commitHardwareLogs;
- (void)enableLogCodes:(id)arg1 andEvents:(id)arg2 andExtraCode:(id)arg3;
- (void)setHardwareLoggingLevel:(unsigned long long)arg1 withWindowSize:(unsigned long long)arg2;
- (void)setChannelTimeout:(double)arg1;

@end
