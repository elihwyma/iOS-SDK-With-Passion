/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSCertifiedDeliveryContext, NSData, NSDate, NSDictionary, NSError, NSNumber, NSString;

@protocol OS_os_transaction;

@interface IDSMessageContext : NSObject

{
    id _boostContext;
    NSObject<OS_os_transaction> *_transaction;
    IDSCertifiedDeliveryContext *_certifiedDeliveryContext;
    NSString *_storageGuid;
    NSString *_outgoingResponseIdentifier;
    NSString *_incomingResponseIdentifier;
    NSString *_serviceIdentifier;
    NSString *_fromID;
    NSString *_toID;
    NSString *_originalDestinationDevice;
    NSString *_originalGUID;
    NSData *_engramGroupID;
    NSNumber *_originalCommand;
    NSNumber *_serverTimestamp;
    NSNumber *_originalTimestamp;
    NSError *_wpConnectionError;
    NSString *_senderCorrelationIdentifier;
    NSString *_resourceTransferURLString;
    NSString *_resourceTransferSandboxExtension;
    NSDictionary *_resourceTransferMetadata;
    NSNumber *_broadcastTime;
    NSNumber *_priority;
    NSNumber *_messageSequenceNumber;
    NSNumber *_bytesSent;
    NSNumber *_totalBytes;
    double _averageLocalRTT;
    long long _broadcastID;
    long long _connectionType;
    long long _localMessageState;
    long long _endpointState;
    struct os_unfair_lock_s _lock;
    _Bool _expectsPeerResponse;
    _Bool _wantsManualAck;
    _Bool _fromServerStorage;
    _Bool _deviceBlackedOut;
    _Bool _wantsAppAck;
    _Bool _usedEngram;
    _Bool _messageHadEncryptedData;
}

@property (nonatomic) _Bool wantsAppAck;
@property (copy, nonatomic) NSString *storageGuid;
@property (retain, nonatomic) NSNumber *broadcastTime;
@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) id boostContext;
@property (nonatomic) long long broadcastID;
@property (nonatomic) long long connectionType;
@property (nonatomic) _Bool usedEngram;
@property (copy, nonatomic, readonly) NSNumber *messageSequenceNumber;
@property (copy, nonatomic, readonly) NSNumber *bytesSent;
@property (copy, nonatomic, readonly) NSNumber *totalBytes;
@property (nonatomic, readonly) long long endpointState;
@property (nonatomic, readonly) IDSCertifiedDeliveryContext *certifiedDeliveryContext;
@property (copy, nonatomic) NSDictionary *resourceTransferMetadata;
@property (copy, nonatomic) NSString *resourceTransferURLString;
@property (copy, nonatomic) NSString *resourceTransferSandboxExtension;
@property (copy, nonatomic) NSString *outgoingResponseIdentifier;
@property (copy, nonatomic) NSString *incomingResponseIdentifier;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *fromID;
@property (copy, nonatomic) NSString *toID;
@property (copy, nonatomic) NSString *originalDestinationDevice;
@property (copy, nonatomic) NSString *originalGUID;
@property (copy, nonatomic) NSData *engramGroupID;
@property (copy, nonatomic) NSNumber *originalCommand;
@property (copy, nonatomic) NSNumber *serverTimestamp;
@property (copy, nonatomic) NSNumber *originalTimestamp;
@property (nonatomic) _Bool expectsPeerResponse;
@property (nonatomic) _Bool wantsManualAck;
@property (nonatomic) _Bool fromServerStorage;
@property (nonatomic) _Bool messageHadEncryptedData;
@property (nonatomic, readonly) NSDate *serverReceivedTime;
@property (nonatomic, readonly) double averageLocalRTT;
@property (nonatomic, readonly) long long localMessageState;
@property (nonatomic, readonly) _Bool deviceBlackedOut;
@property (nonatomic, readonly) NSError *wpConnectionError;
@property (copy, nonatomic) NSString *senderCorrelationIdentifier;

- (id)objectForKey:(id)arg1;
- (void)setBytesSent:(id)arg1;
- (void)setTotalBytes:(id)arg1;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;
- (void)setOriginalGuid:(id)arg1;
- (void)setWPConnectionError:(id)arg1;

@end
