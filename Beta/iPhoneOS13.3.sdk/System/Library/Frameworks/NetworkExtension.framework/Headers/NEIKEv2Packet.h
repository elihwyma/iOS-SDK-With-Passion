/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEIKEv2EncryptedPayload, NEIKEv2IKESPI, NSArray;

@interface NEIKEv2Packet : NSObject

{
    _Bool _isFragmented;
    _Bool _isResponse;
    _Bool _isInitiator;
    _Bool _decrypted;
    _Bool _isInbound;
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    int _messageID;
    NEIKEv2IKESPI *_initiatorSPI;
    NEIKEv2IKESPI *_responderSPI;
    NEIKEv2EncryptedPayload *_encryptedPayload;
    NSArray *_customPayloads;
    NSArray *_notifications;
    NSArray *_packetDatagrams;
    NSArray *_rawPayloads;
}

@property _Bool decrypted;
@property _Bool isFragmented;
@property unsigned int fragmentNumber;
@property unsigned int totalFragments;
@property _Bool isInbound;
@property (retain) NSArray *packetDatagrams;
@property (retain) NSArray *rawPayloads;
@property (readonly) _Bool hasErrors;
@property int messageID;
@property (retain) NEIKEv2IKESPI *initiatorSPI;
@property (retain) NEIKEv2IKESPI *responderSPI;
@property (readonly) NEIKEv2IKESPI *senderSPI;
@property (readonly) NEIKEv2IKESPI *receiverSPI;
@property _Bool isResponse;
@property _Bool isInitiator;
@property (retain) NEIKEv2EncryptedPayload *encryptedPayload;
@property (retain) NSArray *customPayloads;
@property (retain) NSArray *notifications;

+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;
+ (_Bool)encryptPayloads;
+ (id)createPacketFromReceivedData:(id)arg1 ikeSA:(id)arg2;
+ (id)createPacketFromReceivedFragments:(id)arg1 ikeSA:(id)arg2;

- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initOutbound;
- (_Bool)addNotification:(unsigned long long)arg1;
- (id)copyShortDescription;
- (_Bool)hasNotification:(unsigned long long)arg1;
- (id)initResponse:(id)arg1;
- (_Bool)addNotifyPayload:(id)arg1;
- (_Bool)addNotification:(unsigned long long)arg1 data:(id)arg2;
- (id)copyNotification:(unsigned long long)arg1;
- (id)copyUnifiedData;
- (unsigned int)headerSizeForAddressFamily:(unsigned char)arg1 fragment:(_Bool)arg2 nonESPMarker:(_Bool)arg3;
- (void)gatherPayloads;
- (id)copyAdditionalAuthenticationDataForNextPayloadType:(unsigned long long)arg1 plainTextLen:(unsigned int)arg2 fragmentNumber:(unsigned short)arg3 totalFragments:(unsigned short)arg4 encryption:(id)arg5;
- (_Bool)shouldFragmentForEncryptedPayloadSize:(unsigned int)arg1 addressFamily:(unsigned char)arg2 nonESPMarker:(_Bool)arg3;
- (unsigned int)encryptedFragmentSizeForIKESA:(id)arg1;
- (id)createPacketDatagramWithPayloadData:(id)arg1 nextPayloadType:(unsigned long long)arg2 ikeSA:(id)arg3 needsChecksum:(_Bool)arg4;
- (void)filloutPayloads;
- (id)copyPacketDatagramsForIKESA:(id)arg1;
- (id)copyReceivedPacketForIKESA:(id)arg1;
- (void)addNotification:(unsigned long long)arg1 fromArray:(id)arg2 toPayloads:(id)arg3;

@end
