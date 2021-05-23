/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRCoreUtilsPairingSession, MRCryptoPairingSessionBlockDelegate;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession

{
    MRCoreUtilsPairingSession *_pairingSession;
    MRCryptoPairingSessionBlockDelegate *_pairingDelegate;
}

@property (retain, nonatomic) MRCoreUtilsPairingSession *pairingSession;
@property (retain, nonatomic) MRCryptoPairingSessionBlockDelegate *pairingDelegate;
@property (nonatomic, readonly) _Bool hasExchangedMessage;
@property (nonatomic, readonly, getter=isUsingSystemPairing) _Bool usingSystemPairing;
@property (nonatomic, readonly) unsigned long long state;

- (_Bool)isValid;
- (void)open;
- (void)close;
- (void)setDelegate:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (_Bool)isPaired;
- (id)pairedDevices;
- (id)removePeer;
- (id)updatePeer;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (_Bool)deleteIdentityWithError:(id *)arg1;
- (_Bool)_useSystemPairing;
- (void)_openSecuritySessionInState:(unsigned long long)arg1 useSystemPairing:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
