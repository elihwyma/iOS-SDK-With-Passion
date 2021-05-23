/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSArray, _MRDeviceInfoMessageProtobuf;

@protocol MRCryptoPairingSessionDelegate;

@interface MRCryptoPairingSession : NSObject

{
    _MRDeviceInfoMessageProtobuf *_device;
    unsigned long long _role;
    id <MRCryptoPairingSessionDelegate> _delegate;
}

@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *device;
@property (nonatomic, readonly) unsigned long long role;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly, getter=isPaired) _Bool paired;
@property (nonatomic, readonly) NSArray *pairedDevices;
@property (weak, nonatomic) id <MRCryptoPairingSessionDelegate> delegate;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)init;
- (void)open;
- (void)close;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;
- (id)removePeer;
- (id)updatePeer;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (_Bool)deleteIdentityWithError:(id *)arg1;

@end
