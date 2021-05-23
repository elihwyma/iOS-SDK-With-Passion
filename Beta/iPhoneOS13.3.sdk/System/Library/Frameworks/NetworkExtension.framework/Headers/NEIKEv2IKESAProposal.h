/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEIKEv2AuthenticationProtocol, NEIKEv2DHProtocol, NEIKEv2EncryptionProtocol, NEIKEv2IntegrityProtocol, NEIKEv2PRFProtocol, NSArray;

@interface NEIKEv2IKESAProposal : NSObject

{
    unsigned char _proposalNumber;
    NSArray *_encryptionProtocols;
    NSArray *_integrityProtocols;
    NSArray *_prfProtocols;
    NSArray *_dhProtocols;
    NSArray *_eapProtocols;
    unsigned long long _lifetimeSeconds;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2PRFProtocol *_chosenPRFProtocol;
    NEIKEv2DHProtocol *_chosenDHProtocol;
    NEIKEv2AuthenticationProtocol *_authenticationProtocol;
}

@property unsigned char proposalNumber;
@property (retain) NEIKEv2EncryptionProtocol *chosenEncryptionProtocol;
@property (retain) NEIKEv2IntegrityProtocol *chosenIntegrityProtocol;
@property (retain) NEIKEv2PRFProtocol *chosenPRFProtocol;
@property (retain) NEIKEv2DHProtocol *chosenDHProtocol;
@property (readonly) NEIKEv2EncryptionProtocol *encryptionProtocol;
@property (readonly) NEIKEv2IntegrityProtocol *integrityProtocol;
@property (readonly) NEIKEv2PRFProtocol *prfProtocol;
@property (readonly) NEIKEv2DHProtocol *dhProtocol;
@property (readonly) _Bool hasEAPMethods;
@property (retain, nonatomic) NEIKEv2AuthenticationProtocol *authenticationProtocol;
@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property (retain) NSArray *prfProtocols;
@property (retain) NSArray *dhProtocols;
@property (retain) NSArray *eapProtocols;
@property unsigned long long lifetimeSeconds;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)softLifetimeSecondsForInitiator:(_Bool)arg1;
- (id)copyFromRemote:(id)arg1;
- (_Bool)matchesProposal:(id)arg1;
- (unsigned long long)lifetimeSecondsBeyondSoftLifetimeForInitiator:(_Bool)arg1;
- (_Bool)isAValidResponse;

@end
