/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSDate, NSString;

@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage

{
    unsigned long long _offset;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    NSString *_peerResponseIdentifier;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) NSString *peerResponseIdentifier;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) _Bool wantsAppAck;
@property (nonatomic, readonly) _Bool expectsPeerResponse;
@property (nonatomic, readonly) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)_nonHeaderData;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 peerResponseIdentifier:(id)arg3;

@end
