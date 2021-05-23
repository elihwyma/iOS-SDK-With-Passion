/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WiFiAnalyticsAWDManagementFrames : PBCodable

{
    unsigned long long _aTIM;
    unsigned long long _action;
    unsigned long long _assocRequest;
    unsigned long long _assocResponse;
    unsigned long long _auth;
    unsigned long long _beacon;
    unsigned long long _deauth;
    unsigned long long _disassoc;
    unsigned long long _probeRequest;
    unsigned long long _probeResponse;
    unsigned long long _reassocRequest;
    unsigned long long _reassocResponse;
    struct {
        unsigned int aTIM:1;
        unsigned int action:1;
        unsigned int assocRequest:1;
        unsigned int assocResponse:1;
        unsigned int auth:1;
        unsigned int beacon:1;
        unsigned int deauth:1;
        unsigned int disassoc:1;
        unsigned int probeRequest:1;
        unsigned int probeResponse:1;
        unsigned int reassocRequest:1;
        unsigned int reassocResponse:1;
    } _has;
}

@property (nonatomic) _Bool hasAssocRequest;
@property (nonatomic) unsigned long long assocRequest;
@property (nonatomic) _Bool hasAssocResponse;
@property (nonatomic) unsigned long long assocResponse;
@property (nonatomic) _Bool hasReassocRequest;
@property (nonatomic) unsigned long long reassocRequest;
@property (nonatomic) _Bool hasReassocResponse;
@property (nonatomic) unsigned long long reassocResponse;
@property (nonatomic) _Bool hasProbeRequest;
@property (nonatomic) unsigned long long probeRequest;
@property (nonatomic) _Bool hasProbeResponse;
@property (nonatomic) unsigned long long probeResponse;
@property (nonatomic) _Bool hasBeacon;
@property (nonatomic) unsigned long long beacon;
@property (nonatomic) _Bool hasATIM;
@property (nonatomic) unsigned long long aTIM;
@property (nonatomic) _Bool hasDisassoc;
@property (nonatomic) unsigned long long disassoc;
@property (nonatomic) _Bool hasAuth;
@property (nonatomic) unsigned long long auth;
@property (nonatomic) _Bool hasDeauth;
@property (nonatomic) unsigned long long deauth;
@property (nonatomic) _Bool hasAction;
@property (nonatomic) unsigned long long action;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
