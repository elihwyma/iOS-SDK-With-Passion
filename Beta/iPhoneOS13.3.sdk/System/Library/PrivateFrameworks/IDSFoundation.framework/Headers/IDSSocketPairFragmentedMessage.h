/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSDate, NSString;

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage

{
    unsigned long long _offset;
    unsigned int _fragmentedMessageID;
    unsigned int _fragmentIndex;
    unsigned int _totalFragmentCount;
    NSData *_data;
}

@property (nonatomic, readonly) unsigned int fragmentedMessageID;
@property (nonatomic, readonly) unsigned int fragmentIndex;
@property (nonatomic, readonly) unsigned int totalFragmentCount;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) _Bool wantsAppAck;
@property (nonatomic, readonly) _Bool expectsPeerResponse;
@property (nonatomic, readonly) NSString *peerResponseIdentifier;
@property (nonatomic, readonly) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

+ (id)createOriginalMessageFromFragmentedMessages:(id)arg1;
+ (id)createMessageFragmentsFromOriginalMessage:(id)arg1 withFragmentedMessageID:(unsigned int)arg2 fragmentSize:(unsigned int)arg3;

- (id)description;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)_nonHeaderData;
- (id)initWithData:(id)arg1 withFragmentedMessageID:(unsigned int)arg2 fragmentIndex:(unsigned int)arg3 totalFragmentCount:(unsigned int)arg4;

@end
