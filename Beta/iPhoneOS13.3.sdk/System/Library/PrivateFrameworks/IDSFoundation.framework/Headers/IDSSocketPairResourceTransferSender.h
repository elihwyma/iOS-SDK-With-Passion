/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage

{
    NSString *_resourcePath;
    NSDictionary *_metadata;
    NSDictionary *_resourceAttributes;
    _Bool _sentFirstMessage;
    unsigned long long _totalBytes;
    unsigned long long _nextByte;
    _Bool _done;
    int _fileDescriptor;
    unsigned int _maxChunkSize;
    _Bool _resumeResourceTransfers;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _compressPayload;
    _Bool _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

@property (nonatomic, readonly) _Bool sentFirstMessage;
@property (nonatomic, readonly) _Bool isDone;
@property (nonatomic) unsigned int maxChunkSize;
@property (nonatomic) _Bool resumeResourceTransfers;
@property (nonatomic) unsigned long long nextByte;
@property (nonatomic, readonly) unsigned long long totalBytes;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) NSString *messageUUID;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) _Bool wantsAppAck;
@property (nonatomic, readonly) _Bool expectsPeerResponse;
@property (nonatomic, readonly) NSString *peerResponseIdentifier;
@property (retain, nonatomic) NSDate *expiryDate;

- (void)dealloc;
- (id)description;
- (void)reset;
- (id)nextMessage;
- (unsigned char)command;
- (void)closeFileAndMarkDone;
- (_Bool)readNextBytes:(id *)arg1 byteOffset:(unsigned long long *)arg2;
- (id)readNextBytes;
- (id)nextMessage_old;
- (id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned int)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(_Bool)arg5 wantsAppAck:(_Bool)arg6 compressPayload:(_Bool)arg7 compressed:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 expiryDate:(id)arg11;

@end
