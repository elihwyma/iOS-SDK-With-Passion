/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <IDS/IDSProtobuf.h>

@class PBCodable;

@interface BLTPBProtobuf : IDSProtobuf

{
    PBCodable *_protobuf;
    long long _sequenceNumberError;
    unsigned long long _sessionState;
    IDSProtobuf *_idsProtobuf;
}

@property (retain, nonatomic) IDSProtobuf *idsProtobuf;
@property (retain, nonatomic) PBCodable *protobuf;
@property (nonatomic, readonly) long long sequenceNumberError;
@property (nonatomic, readonly) unsigned long long sessionState;

- (id)initWithIDSProtobuf:(id)arg1 sequenceNumberManager:(id)arg2;
- (id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2 isResponse:(_Bool)arg3 sequenceNumberManager:(id)arg4;

@end
