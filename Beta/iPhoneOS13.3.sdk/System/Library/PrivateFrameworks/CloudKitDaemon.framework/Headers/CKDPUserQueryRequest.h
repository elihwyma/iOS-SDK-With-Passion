/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPUserAlias, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPUserQueryRequest : PBRequest

{
    CKDPUserAlias *_alias;
    NSString *_oBSOLETEPcsServiceType;
    NSMutableArray *_sortedBys;
    _Bool _publicKeyRequested;
    struct {
        unsigned int publicKeyRequested:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAlias;
@property (retain, nonatomic) CKDPUserAlias *alias;
@property (retain, nonatomic) NSMutableArray *sortedBys;
@property (nonatomic, readonly) _Bool hasOBSOLETEPcsServiceType;
@property (retain, nonatomic) NSString *oBSOLETEPcsServiceType;
@property (nonatomic) _Bool hasPublicKeyRequested;
@property (nonatomic) _Bool publicKeyRequested;

+ (id)options;
+ (Class)sortedByType;

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
- (void)addSortedBy:(id)arg1;
- (unsigned long long)sortedBysCount;
- (void)clearSortedBys;
- (id)sortedByAtIndex:(unsigned long long)arg1;

@end
