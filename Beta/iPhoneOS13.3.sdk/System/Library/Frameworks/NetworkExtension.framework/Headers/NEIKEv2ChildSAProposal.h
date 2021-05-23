/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEIKEv2DHProtocol, NEIKEv2ESPSPI, NEIKEv2EncryptionProtocol, NEIKEv2IntegrityProtocol, NSArray;

@interface NEIKEv2ChildSAProposal : NSObject

{
    _Bool _opportunisticPFS;
    unsigned char _proposalNumber;
    unsigned long long _protocol;
    NSArray *_encryptionProtocols;
    NSArray *_integrityProtocols;
    NSArray *_dhProtocols;
    unsigned long long _lifetimeSeconds;
    NEIKEv2ESPSPI *_spi;
    NEIKEv2ESPSPI *_remoteSPI;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2DHProtocol *_chosenDHProtocol;
}

@property unsigned char proposalNumber;
@property (retain) NEIKEv2ESPSPI *spi;
@property (retain) NEIKEv2ESPSPI *remoteSPI;
@property (retain) NEIKEv2EncryptionProtocol *chosenEncryptionProtocol;
@property (retain) NEIKEv2IntegrityProtocol *chosenIntegrityProtocol;
@property (retain) NEIKEv2DHProtocol *chosenDHProtocol;
@property (readonly) NEIKEv2EncryptionProtocol *encryptionProtocol;
@property (readonly) NEIKEv2IntegrityProtocol *integrityProtocol;
@property (readonly) NEIKEv2DHProtocol *dhProtocol;
@property unsigned long long protocol;
@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property (retain) NSArray *dhProtocols;
@property unsigned long long lifetimeSeconds;
@property _Bool opportunisticPFS;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)isAValidResponse;
- (id)copyFromRemote:(id)arg1 checkDHGroup:(_Bool)arg2;
- (id)copyForRekey;
- (_Bool)matchesProposal:(id)arg1 checkDHGroup:(_Bool)arg2;

@end
