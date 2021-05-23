/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSDate, NSString;

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage

{
    unsigned long long _offset;
    unsigned char _versionNumber;
    _Bool _encrypted;
    _Bool _fileXfer;
    unsigned short _streamID;
    unsigned short _priority;
    unsigned int _sequenceNumber;
    NSData *_data;
}

@property (nonatomic, readonly) unsigned char versionNumber;
@property (nonatomic, readonly) _Bool encrypted;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) unsigned short priority;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic, readonly) _Bool fileXfer;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) _Bool wantsAppAck;
@property (nonatomic, readonly) _Bool expectsPeerResponse;
@property (nonatomic, readonly) NSString *peerResponseIdentifier;
@property (nonatomic, readonly) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

- (id)description;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)_nonHeaderData;
- (id)initWithVersion:(unsigned char)arg1 encrypted:(_Bool)arg2 streamID:(unsigned short)arg3 priority:(unsigned short)arg4 sequenceNumber:(unsigned int)arg5 fileXfer:(_Bool)arg6 data:(id)arg7;

@end
