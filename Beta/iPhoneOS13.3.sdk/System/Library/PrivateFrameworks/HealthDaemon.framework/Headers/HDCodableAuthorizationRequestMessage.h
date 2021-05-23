/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface HDCodableAuthorizationRequestMessage : PBCodable <Swift>

{
    CDStruct_5df41632 _typesToReads;
    CDStruct_5df41632 _typesToWrites;
    NSString *_appBundleIdentifier;
    NSData *_requestIdentifier;
}

@property (nonatomic, readonly) _Bool hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (nonatomic, readonly) _Bool hasRequestIdentifier;
@property (retain, nonatomic) NSData *requestIdentifier;
@property (nonatomic, readonly) unsigned long long typesToReadsCount;
@property (nonatomic, readonly) long long *typesToReads;
@property (nonatomic, readonly) unsigned long long typesToWritesCount;
@property (nonatomic, readonly) long long *typesToWrites;

+ (id)codableAuthorizationRequestWithRecord:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)decodedWriteTypes;
- (id)decodedReadTypes;
- (long long)typesToReadAtIndex:(unsigned long long)arg1;
- (id)_objectTypeForCode:(long long)arg1;
- (long long)typesToWriteAtIndex:(unsigned long long)arg1;
- (void)addTypesToRead:(long long)arg1;
- (void)addTypesToWrite:(long long)arg1;
- (void)clearTypesToReads;
- (void)clearTypesToWrites;
- (void)setTypesToReads:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setTypesToWrites:(long long *)arg1 count:(unsigned long long)arg2;

@end
