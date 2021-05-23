/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordResolveTokenRequest : PBRequest

{
    NSMutableArray *_rootRecordDesiredKeys;
    NSString *_routingKey;
    NSData *_shortTokenHash;
    _Bool _forceFetch;
    _Bool _shouldFetchRootRecord;
    struct {
        unsigned int forceFetch:1;
        unsigned int shouldFetchRootRecord:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRoutingKey;
@property (retain, nonatomic) NSString *routingKey;
@property (nonatomic, readonly) _Bool hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (nonatomic) _Bool hasForceFetch;
@property (nonatomic) _Bool forceFetch;
@property (nonatomic) _Bool hasShouldFetchRootRecord;
@property (nonatomic) _Bool shouldFetchRootRecord;
@property (retain, nonatomic) NSMutableArray *rootRecordDesiredKeys;

+ (id)options;
+ (Class)rootRecordDesiredKeysType;

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
- (void)addRootRecordDesiredKeys:(id)arg1;
- (unsigned long long)rootRecordDesiredKeysCount;
- (void)clearRootRecordDesiredKeys;
- (id)rootRecordDesiredKeysAtIndex:(unsigned long long)arg1;

@end
