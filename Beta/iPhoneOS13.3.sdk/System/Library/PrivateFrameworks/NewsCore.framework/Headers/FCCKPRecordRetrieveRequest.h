/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBRequest.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPRecordIdentifier, FCCKPRequestedFields, NSString;

@interface FCCKPRecordRetrieveRequest : PBRequest <Swift>

{
    NSString *_clientVersionETag;
    FCCKPRecordIdentifier *_recordIdentifier;
    FCCKPRequestedFields *_requestedFields;
    NSString *_versionETag;
}

@property (nonatomic, readonly) _Bool hasRecordIdentifier;
@property (retain, nonatomic) FCCKPRecordIdentifier *recordIdentifier;
@property (nonatomic, readonly) _Bool hasRequestedFields;
@property (retain, nonatomic) FCCKPRequestedFields *requestedFields;
@property (nonatomic, readonly) _Bool hasVersionETag;
@property (retain, nonatomic) NSString *versionETag;
@property (nonatomic, readonly) _Bool hasClientVersionETag;
@property (retain, nonatomic) NSString *clientVersionETag;

+ (id)options;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
