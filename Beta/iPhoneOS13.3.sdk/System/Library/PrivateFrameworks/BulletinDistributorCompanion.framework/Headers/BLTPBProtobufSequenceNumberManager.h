/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BLTCircularBitBuffer, NSLock, NSString, NSURL, NSUUID;

@interface BLTPBProtobufSequenceNumberManager : NSObject

{
    unsigned long long _sendSequenceNumber;
    unsigned long long _recvSequenceNumber;
    NSLock *_sequenceNumberAccess;
    BLTCircularBitBuffer *_duplicateEntries;
    NSURL *_sequenceNumbersURL;
    _Bool _updateSequenceNumbersOnOutOfOrder;
    unsigned long long _sessionState;
    NSString *_serviceName;
    NSUUID *_currentSessionIdentifier;
    NSUUID *_recvSessionIdentifier;
}

@property (nonatomic) unsigned long long sessionState;
@property (copy, nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSUUID *currentSessionIdentifier;
@property (nonatomic, readonly) NSUUID *recvSessionIdentifier;

- (id)initWithServiceName:(id)arg1 updateSequenceNumbersOnOutOfOrder:(_Bool)arg2;
- (id)initWithServiceName:(id)arg1 updateSequenceNumbersOnOutOfOrder:(_Bool)arg2 duplicateCapacity:(unsigned long long)arg3;
- (void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(unsigned long long)arg1;
- (_Bool)_isSequenceNumberInOrder:(unsigned long long)arg1;
- (_Bool)_writeSequenceNumbersToStore;
- (id)_sequenceNumbersURL;
- (long long)setRecvSequenceNumber:(unsigned long long)arg1 recvSessionIdentifier:(id)arg2 force:(_Bool)arg3;
- (id)nextSendSequenceNumber;

@end
