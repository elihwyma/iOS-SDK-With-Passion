/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRCryptoPairingMessage : MRProtocolMessage

@property (nonatomic, readonly) NSData *pairingData;
@property (nonatomic, readonly) int status;
@property (nonatomic, readonly, getter=isRetrying) _Bool retrying;
@property (nonatomic, readonly, getter=isUsingSystemPairing) _Bool usingSystemPairing;
@property (nonatomic, readonly) unsigned long long state;

- (unsigned long long)type;
- (unsigned long long)encryptionType;
- (id)initWithPairingData:(id)arg1 status:(int)arg2 isRetrying:(_Bool)arg3 isUsingSystemPairing:(_Bool)arg4 state:(unsigned long long)arg5;
- (id)initWithPairingData:(id)arg1 status:(int)arg2;

@end
