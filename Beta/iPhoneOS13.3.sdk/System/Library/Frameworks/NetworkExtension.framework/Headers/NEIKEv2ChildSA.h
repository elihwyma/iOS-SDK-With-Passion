/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEIKEv2ChildSAConfiguration, NEIKEv2ChildSAProposal, NEIKEv2IKESA, NSArray, NSData, NSError, NSMutableData;

@interface NEIKEv2ChildSA : NSObject

{
    CDUnion_07c5b791 _dhECKey;
    _Bool _shouldSendStateUpdate;
    _Bool _isFirstChild;
    _Bool _isInitiator;
    _Bool _sequencePerTrafficClassSupported;
    unsigned short _incomingDatabaseReqID;
    unsigned short _outgoingDatabaseReqID;
    unsigned int _childID;
    NEIKEv2IKESA *_ikeSA;
    unsigned long long _state;
    NSError *_error;
    NEIKEv2ChildSAConfiguration *_configuration;
    NEIKEv2ChildSAProposal *_chosenProposal;
    NSArray *_localTrafficSelectors;
    NSArray *_remoteTrafficSelectors;
    NSData *_localNonce;
    NSData *_remoteNonce;
    struct NSMutableData *_dhPublicKey;
    NSData *_dhRemotePublicKey;
    struct OpaqueSecDHContext *_dhContext;
    unsigned long long _dhPublicKeySize;
    struct NSMutableData *_incomingEncryptionKey;
    struct NSMutableData *_incomingIntegrityKey;
    struct NSMutableData *_outgoingEncryptionKey;
    struct NSMutableData *_outgoingIntegrityKey;
    NEIKEv2ChildSAProposal *_initiatorRekeyProposal;
    NEIKEv2ChildSAProposal *_initiatorRekeyNonPFSProposal;
    NEIKEv2ChildSAProposal *_responderRekeyProposal;
}

@property (weak) NEIKEv2IKESA *ikeSA;
@property unsigned int childID;
@property (retain) NEIKEv2ChildSAConfiguration *configuration;
@property unsigned long long state;
@property (retain) NSError *error;
@property _Bool shouldSendStateUpdate;
@property unsigned short incomingDatabaseReqID;
@property unsigned short outgoingDatabaseReqID;
@property _Bool isFirstChild;
@property _Bool isInitiator;
@property (readonly) _Bool isRekeying;
@property (retain) NEIKEv2ChildSAProposal *chosenProposal;
@property (retain) NSArray *localTrafficSelectors;
@property (retain) NSArray *remoteTrafficSelectors;
@property (retain) NSArray *initiatorTrafficSelectors;
@property (retain) NSArray *responderTrafficSelectors;
@property (retain) NSData *localNonce;
@property (retain) NSData *remoteNonce;
@property (retain) NSData *initiatorNonce;
@property (retain) NSData *responderNonce;
@property (retain) NSMutableData *dhPublicKey;
@property (retain) NSData *dhRemotePublicKey;
@property struct OpaqueSecDHContext *dhContext;
@property unsigned long long dhPublicKeySize;
@property (retain) NSMutableData *incomingEncryptionKey;
@property (retain) NSMutableData *incomingIntegrityKey;
@property (retain) NSMutableData *outgoingEncryptionKey;
@property (retain) NSMutableData *outgoingIntegrityKey;
@property (retain) NSMutableData *initiatorSendEncryptionKey;
@property (retain) NSMutableData *initiatorSendIntegrityKey;
@property (retain) NSMutableData *responderSendEncryptionKey;
@property (retain) NSMutableData *responderSendIntegrityKey;
@property (retain) NEIKEv2ChildSAProposal *initiatorRekeyProposal;
@property (retain) NEIKEv2ChildSAProposal *initiatorRekeyNonPFSProposal;
@property (retain) NEIKEv2ChildSAProposal *responderRekeyProposal;
@property (readonly) NSArray *configuredInitiatorTrafficSelectors;
@property (readonly) NSArray *configuredResponderTrafficSelectors;
@property _Bool sequencePerTrafficClassSupported;

+ (unsigned short)nextDatabaseReqID;

- (void)dealloc;
- (id)description;
- (void)reset;
- (id)initWithConfiguration:(id)arg1 childID:(unsigned int)arg2 isFirstChild:(_Bool)arg3 ikeSA:(id)arg4;
- (void)resetIKESA:(id)arg1;
- (void)setState:(unsigned long long)arg1 error:(id)arg2;
- (void)sentStateUpdate;
- (_Bool)shouldGenerateNewDHKeys;
- (struct ccec_full_ctx *)dhECPKeyForDesc:(int)arg1;
- (unsigned char (*)[32])dhCurveKeyForDesc:(int)arg1;
- (_Bool)generateLocalDHValues;
- (_Bool)generateLocalNonce;
- (_Bool)generateLocalValues;
- (_Bool)generateAllValues;

@end
