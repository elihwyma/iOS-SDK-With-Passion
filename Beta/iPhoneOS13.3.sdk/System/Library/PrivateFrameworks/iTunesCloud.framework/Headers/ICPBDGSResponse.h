/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICPBDGSFinishDelegationResponse, ICPBDGSStartDelegationResponse;

@interface ICPBDGSResponse : PBCodable <Swift>

{
    ICPBDGSFinishDelegationResponse *_finishDelegationResponse;
    unsigned int _requestUniqueID;
    ICPBDGSStartDelegationResponse *_startDelegationResponse;
    struct {
        unsigned int requestUniqueID:1;
    } _has;
}

@property (nonatomic) _Bool hasRequestUniqueID;
@property (nonatomic) unsigned int requestUniqueID;
@property (nonatomic, readonly) _Bool hasStartDelegationResponse;
@property (retain, nonatomic) ICPBDGSStartDelegationResponse *startDelegationResponse;
@property (nonatomic, readonly) _Bool hasFinishDelegationResponse;
@property (retain, nonatomic) ICPBDGSFinishDelegationResponse *finishDelegationResponse;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
