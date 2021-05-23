/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface RMSFairPlaySession : NSObject

{
    struct FPSAPContextOpaque_ *_sessionToken;
    struct FairPlayHWInfo_ _hardwareInfo;
    _Bool _handshakeComplete;
}

@property (nonatomic, readonly, getter=isHandshakeComplete) _Bool handshakeComplete;

- (void)dealloc;
- (void)invalidate;
- (_Bool)_getHardwareInfo:(struct FairPlayHWInfo_ *)arg1;
- (id)_hexStringForData:(id)arg1;
- (id)handshakeIterationWithData:(id)arg1;
- (id)handshakeData;
- (id)headerForURL:(id)arg1;

@end
