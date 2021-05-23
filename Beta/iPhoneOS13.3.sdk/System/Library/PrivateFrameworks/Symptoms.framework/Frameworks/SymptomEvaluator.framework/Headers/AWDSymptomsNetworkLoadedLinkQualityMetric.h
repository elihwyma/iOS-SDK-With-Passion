/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDSymptomsNetworkLoadedLinkQualityMetric : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _dataStalls;
    int _lQM;
    int _lastReportedRSSI;
    int _loadedLQM;
    NSString *_networkAttachmentLabel;
    int _networkType;
    NSString *_radioAccessTechnology;
    _Bool _isLowInternetDL;
    _Bool _isLowInternetUL;
    _Bool _isNetworkReliable;
    struct {
        unsigned int timestamp:1;
        unsigned int dataStalls:1;
        unsigned int lQM:1;
        unsigned int lastReportedRSSI:1;
        unsigned int loadedLQM:1;
        unsigned int networkType:1;
        unsigned int isLowInternetDL:1;
        unsigned int isLowInternetUL:1;
        unsigned int isNetworkReliable:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic, readonly) _Bool hasNetworkAttachmentLabel;
@property (retain, nonatomic) NSString *networkAttachmentLabel;
@property (nonatomic) _Bool hasLoadedLQM;
@property (nonatomic) int loadedLQM;
@property (nonatomic) _Bool hasLQM;
@property (nonatomic) int lQM;
@property (nonatomic, readonly) _Bool hasRadioAccessTechnology;
@property (retain, nonatomic) NSString *radioAccessTechnology;
@property (nonatomic) _Bool hasIsNetworkReliable;
@property (nonatomic) _Bool isNetworkReliable;
@property (nonatomic) _Bool hasDataStalls;
@property (nonatomic) unsigned int dataStalls;
@property (nonatomic) _Bool hasLastReportedRSSI;
@property (nonatomic) int lastReportedRSSI;
@property (nonatomic) _Bool hasIsLowInternetUL;
@property (nonatomic) _Bool isLowInternetUL;
@property (nonatomic) _Bool hasIsLowInternetDL;
@property (nonatomic) _Bool isLowInternetDL;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)networkTypeAsString:(int)arg1;
- (int)StringAsNetworkType:(id)arg1;

@end
