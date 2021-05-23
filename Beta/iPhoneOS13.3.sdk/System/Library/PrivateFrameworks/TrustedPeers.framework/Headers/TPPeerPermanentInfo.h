/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol TPPublicKey;

@interface TPPeerPermanentInfo : NSObject

{
    NSString *_machineID;
    NSString *_modelID;
    unsigned long long _epoch;
    id <TPPublicKey> _signingPubKey;
    id <TPPublicKey> _encryptionPubKey;
    NSData *_data;
    NSData *_sig;
    NSString *_peerID;
}

@property (retain, nonatomic) NSString *machineID;
@property (retain, nonatomic) NSString *modelID;
@property (nonatomic) unsigned long long epoch;
@property (retain, nonatomic) id <TPPublicKey> signingPubKey;
@property (retain, nonatomic) id <TPPublicKey> encryptionPubKey;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *sig;
@property (retain, nonatomic) NSString *peerID;

- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithMachineID:(id)arg1 modelID:(id)arg2 epoch:(unsigned long long)arg3 signingPubKey:(id)arg4 encryptionPubKey:(id)arg5 data:(id)arg6 sig:(id)arg7 peerID:(id)arg8;

@end
