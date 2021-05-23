/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface IDSSocketPairResourceTransferReceiver : NSObject

{
    NSString *_resourcePath;
    NSDictionary *_metadata;
    int _fileDescriptor;
    unsigned long long _totalBytesExpected;
    unsigned long long _totalBytesReceived;
    _Bool _done;
    _Bool _isResuming;
    _Bool _resumeResourceTransfers;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

@property (nonatomic, readonly) unsigned long long totalBytesReceived;
@property (nonatomic, readonly) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) _Bool wantsAppAck;
@property (nonatomic, readonly) _Bool expectsPeerResponse;
@property (nonatomic, readonly) NSString *peerResponseIdentifier;

+ (id)incomingFilePathForMessageUUID:(id)arg1;
+ (id)incomingFilePath;

- (void)dealloc;
- (_Bool)writeResourceData:(id)arg1 resourceByteOffset:(unsigned long long)arg2;
- (_Bool)writeResourceData:(id)arg1;
- (id)initWithMessage:(id)arg1 resumeResourceTransfers:(_Bool)arg2 receiverError:(unsigned char *)arg3;
- (void)abortTransfer;
- (_Bool)appendMessage:(id)arg1 receiverError:(unsigned char *)arg2;
- (id)finalizedMessageDictionaryIfDone;

@end
