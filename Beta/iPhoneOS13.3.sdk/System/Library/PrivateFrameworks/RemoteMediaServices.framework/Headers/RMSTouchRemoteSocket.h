/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSOutputStream, NSString;

@protocol RMSTouchRemoteSocketDelegate;

__attribute__((visibility("hidden")))
@interface RMSTouchRemoteSocket : NSObject

{
    NSOutputStream *_outputStream;
    NSString *_host;
    unsigned int _port;
    unsigned int _encryptionKey;
    id <RMSTouchRemoteSocketDelegate> _delegate;
}

@property (weak, nonatomic) id <RMSTouchRemoteSocketDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)disconnect;
- (void)connect;
- (id)_encryptData:(id)arg1;
- (id)initWithHost:(id)arg1 port:(int)arg2 encryptionKey:(int)arg3;
- (_Bool)sendTouchCode:(long long)arg1 timeInMilliseconds:(unsigned int)arg2 location:(struct CGPoint)arg3;

@end
