/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSDate, NSString;

@interface IDSSocketPairDataMessage : IDSSocketPairMessage

{
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned long long _payloadOffset;
    unsigned long long _payloadLength;
    NSData *_data;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) _Bool expectsPeerResponse;
@property (nonatomic, readonly) _Bool wantsAppAck;
@property (nonatomic) _Bool compressed;
@property (nonatomic, readonly) NSString *peerResponseIdentifier;
@property (nonatomic, readonly) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)_nonHeaderData;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(_Bool)arg3 wantsAppAck:(_Bool)arg4 compressed:(_Bool)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 data:(id)arg8 expiryDate:(id)arg9;

@end
