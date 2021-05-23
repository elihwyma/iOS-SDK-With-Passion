/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <ProtocolBuffer/PBCodable.h>

@class C2MPCloudKitInfo, C2MPDeviceInfo, C2MPGenericEvent, C2MPNetworkEvent, C2MPServerInfo, NSString;

__attribute__((visibility("hidden")))
@interface C2MPMetric : PBCodable

{
    unsigned long long _reportFrequency;
    unsigned long long _reportFrequencyBase;
    unsigned long long _triggers;
    C2MPCloudKitInfo *_cloudkitInfo;
    C2MPDeviceInfo *_deviceInfo;
    C2MPGenericEvent *_genericEvent;
    int _metricType;
    C2MPNetworkEvent *_networkEvent;
    NSString *_reportTransportSourceApplicationBundleIdentifier;
    NSString *_reportTransportSourceApplicationSecondaryIdentifier;
    C2MPServerInfo *_serverInfo;
    _Bool _reportTransportAllowExpensiveAccess;
    _Bool _reportTransportAllowPowerNapScheduling;
    struct {
        unsigned int reportFrequency:1;
        unsigned int reportFrequencyBase:1;
        unsigned int triggers:1;
        unsigned int metricType:1;
        unsigned int reportTransportAllowExpensiveAccess:1;
        unsigned int reportTransportAllowPowerNapScheduling:1;
    } _has;
}

@property (nonatomic) _Bool hasMetricType;
@property (nonatomic) int metricType;
@property (nonatomic, readonly) _Bool hasDeviceInfo;
@property (retain, nonatomic) C2MPDeviceInfo *deviceInfo;
@property (nonatomic, readonly) _Bool hasCloudkitInfo;
@property (retain, nonatomic) C2MPCloudKitInfo *cloudkitInfo;
@property (nonatomic, readonly) _Bool hasServerInfo;
@property (retain, nonatomic) C2MPServerInfo *serverInfo;
@property (nonatomic) _Bool hasTriggers;
@property (nonatomic) unsigned long long triggers;
@property (nonatomic) _Bool hasReportFrequency;
@property (nonatomic) unsigned long long reportFrequency;
@property (nonatomic) _Bool hasReportFrequencyBase;
@property (nonatomic) unsigned long long reportFrequencyBase;
@property (nonatomic) _Bool hasReportTransportAllowExpensiveAccess;
@property (nonatomic) _Bool reportTransportAllowExpensiveAccess;
@property (nonatomic) _Bool hasReportTransportAllowPowerNapScheduling;
@property (nonatomic) _Bool reportTransportAllowPowerNapScheduling;
@property (nonatomic, readonly) _Bool hasReportTransportSourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *reportTransportSourceApplicationBundleIdentifier;
@property (nonatomic, readonly) _Bool hasReportTransportSourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) NSString *reportTransportSourceApplicationSecondaryIdentifier;
@property (nonatomic, readonly) _Bool hasNetworkEvent;
@property (retain, nonatomic) C2MPNetworkEvent *networkEvent;
@property (nonatomic, readonly) _Bool hasGenericEvent;
@property (retain, nonatomic) C2MPGenericEvent *genericEvent;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)metricTypeAsString:(int)arg1;
- (int)StringAsMetricType:(id)arg1;

@end
