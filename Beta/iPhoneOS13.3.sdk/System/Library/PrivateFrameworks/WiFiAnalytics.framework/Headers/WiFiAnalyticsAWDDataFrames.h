/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WiFiAnalyticsAWDDataFrames : PBCodable

{
    unsigned long long _cFack;
    unsigned long long _cFackCFpoll;
    unsigned long long _cFpoll;
    unsigned long long _dataCFack;
    unsigned long long _dataCFackCFpoll;
    unsigned long long _dataCFpoll;
    unsigned long long _dataFrames;
    unsigned long long _null;
    unsigned long long _qoSdata;
    unsigned long long _qoSdataCFack;
    unsigned long long _qoSdataCFackCFpoll;
    unsigned long long _qoSnodataCFack;
    unsigned long long _qoSnodataCFpoll;
    unsigned long long _qoSnull;
    struct {
        unsigned int cFack:1;
        unsigned int cFackCFpoll:1;
        unsigned int cFpoll:1;
        unsigned int dataCFack:1;
        unsigned int dataCFackCFpoll:1;
        unsigned int dataCFpoll:1;
        unsigned int dataFrames:1;
        unsigned int null:1;
        unsigned int qoSdata:1;
        unsigned int qoSdataCFack:1;
        unsigned int qoSdataCFackCFpoll:1;
        unsigned int qoSnodataCFack:1;
        unsigned int qoSnodataCFpoll:1;
        unsigned int qoSnull:1;
    } _has;
}

@property (nonatomic) _Bool hasDataFrames;
@property (nonatomic) unsigned long long dataFrames;
@property (nonatomic) _Bool hasDataCFack;
@property (nonatomic) unsigned long long dataCFack;
@property (nonatomic) _Bool hasDataCFpoll;
@property (nonatomic) unsigned long long dataCFpoll;
@property (nonatomic) _Bool hasDataCFackCFpoll;
@property (nonatomic) unsigned long long dataCFackCFpoll;
@property (nonatomic) _Bool hasNull;
@property (nonatomic) unsigned long long null;
@property (nonatomic) _Bool hasCFack;
@property (nonatomic) unsigned long long cFack;
@property (nonatomic) _Bool hasCFpoll;
@property (nonatomic) unsigned long long cFpoll;
@property (nonatomic) _Bool hasCFackCFpoll;
@property (nonatomic) unsigned long long cFackCFpoll;
@property (nonatomic) _Bool hasQoSdata;
@property (nonatomic) unsigned long long qoSdata;
@property (nonatomic) _Bool hasQoSdataCFack;
@property (nonatomic) unsigned long long qoSdataCFack;
@property (nonatomic) _Bool hasQoSdataCFackCFpoll;
@property (nonatomic) unsigned long long qoSdataCFackCFpoll;
@property (nonatomic) _Bool hasQoSnull;
@property (nonatomic) unsigned long long qoSnull;
@property (nonatomic) _Bool hasQoSnodataCFpoll;
@property (nonatomic) unsigned long long qoSnodataCFpoll;
@property (nonatomic) _Bool hasQoSnodataCFack;
@property (nonatomic) unsigned long long qoSnodataCFack;

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
