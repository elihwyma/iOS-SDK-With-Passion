/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordDeleteRequest : PBRequest

{
    NSString *_etag;
    NSMutableArray *_pluginFields;
    NSMutableArray *_publicKeys;
    CKDPRecordIdentifier *_recordIdentifier;
    _Bool _participantKeyLost;
    struct {
        unsigned int participantKeyLost:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSMutableArray *pluginFields;
@property (nonatomic) _Bool hasParticipantKeyLost;
@property (nonatomic) _Bool participantKeyLost;
@property (retain, nonatomic) NSMutableArray *publicKeys;

+ (id)options;
+ (Class)pluginFieldsType;
+ (Class)publicKeysType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addPluginFields:(id)arg1;
- (unsigned long long)pluginFieldsCount;
- (void)clearPluginFields;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;
- (void)addPublicKeys:(id)arg1;
- (unsigned long long)publicKeysCount;
- (void)clearPublicKeys;
- (id)publicKeysAtIndex:(unsigned long long)arg1;

@end
