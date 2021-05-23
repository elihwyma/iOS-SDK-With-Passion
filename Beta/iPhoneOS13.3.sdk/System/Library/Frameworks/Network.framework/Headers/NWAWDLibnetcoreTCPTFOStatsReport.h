/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreTCPTFOStatsReport : PBCodable

{
    unsigned long long _numTfoBlackholed;
    unsigned long long _numTfoCookieInvalid;
    unsigned long long _numTfoCookieRcv;
    unsigned long long _numTfoCookieReq;
    unsigned long long _numTfoCookieReqRcv;
    unsigned long long _numTfoCookieSent;
    unsigned long long _numTfoFallback;
    unsigned long long _numTfoSynDataAcked;
    unsigned long long _numTfoSynDataRcv;
    unsigned long long _numTfoSynDataSent;
    struct {
        unsigned int numTfoBlackholed:1;
        unsigned int numTfoCookieInvalid:1;
        unsigned int numTfoCookieRcv:1;
        unsigned int numTfoCookieReq:1;
        unsigned int numTfoCookieReqRcv:1;
        unsigned int numTfoCookieSent:1;
        unsigned int numTfoFallback:1;
        unsigned int numTfoSynDataAcked:1;
        unsigned int numTfoSynDataRcv:1;
        unsigned int numTfoSynDataSent:1;
    } _has;
}

@property (nonatomic) _Bool hasNumTfoCookieReq;
@property (nonatomic) unsigned long long numTfoCookieReq;
@property (nonatomic) _Bool hasNumTfoCookieRcv;
@property (nonatomic) unsigned long long numTfoCookieRcv;
@property (nonatomic) _Bool hasNumTfoFallback;
@property (nonatomic) unsigned long long numTfoFallback;
@property (nonatomic) _Bool hasNumTfoSynDataSent;
@property (nonatomic) unsigned long long numTfoSynDataSent;
@property (nonatomic) _Bool hasNumTfoSynDataAcked;
@property (nonatomic) unsigned long long numTfoSynDataAcked;
@property (nonatomic) _Bool hasNumTfoSynDataRcv;
@property (nonatomic) unsigned long long numTfoSynDataRcv;
@property (nonatomic) _Bool hasNumTfoCookieReqRcv;
@property (nonatomic) unsigned long long numTfoCookieReqRcv;
@property (nonatomic) _Bool hasNumTfoCookieSent;
@property (nonatomic) unsigned long long numTfoCookieSent;
@property (nonatomic) _Bool hasNumTfoCookieInvalid;
@property (nonatomic) unsigned long long numTfoCookieInvalid;
@property (nonatomic) _Bool hasNumTfoBlackholed;
@property (nonatomic) unsigned long long numTfoBlackholed;

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
