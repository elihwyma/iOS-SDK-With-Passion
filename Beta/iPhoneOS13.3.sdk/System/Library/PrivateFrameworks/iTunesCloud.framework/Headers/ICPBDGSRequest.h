/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBRequest.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

@interface ICPBDGSRequest : PBRequest <Swift>

{
    ICPBDGSFinishDelegationRequest *_finishDelegationRequest;
    ICPBDGSStartDelegationRequest *_startDelegationRequest;
    unsigned int _uniqueID;
    struct {
        unsigned int uniqueID:1;
    } _has;
}

@property (nonatomic) _Bool hasUniqueID;
@property (nonatomic) unsigned int uniqueID;
@property (nonatomic, readonly) _Bool hasStartDelegationRequest;
@property (retain, nonatomic) ICPBDGSStartDelegationRequest *startDelegationRequest;
@property (nonatomic, readonly) _Bool hasFinishDelegationRequest;
@property (retain, nonatomic) ICPBDGSFinishDelegationRequest *finishDelegationRequest;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
