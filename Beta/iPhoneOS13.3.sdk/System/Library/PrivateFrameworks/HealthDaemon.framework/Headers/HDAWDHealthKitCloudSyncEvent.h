/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDAWDHealthKitCloudSyncEvent : PBCodable <Swift>

{
    unsigned long long _pcsReportManateeStatus;
    NSString *_cloudKitUUID;
    NSString *_containerID;
    int _operation;
    NSString *_operationUUID;
    unsigned int _options;
    int _reason;
    NSString *_syncCirclePrefix;
    NSString *_syncUUID;
    _Bool _hasCKManateeEnabled;
    _Bool _hasInternalSettingManateeEnabled;
    struct {
        unsigned int pcsReportManateeStatus:1;
        unsigned int operation:1;
        unsigned int options:1;
        unsigned int reason:1;
        unsigned int hasCKManateeEnabled:1;
        unsigned int hasInternalSettingManateeEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasOperation;
@property (nonatomic) int operation;
@property (nonatomic) _Bool hasReason;
@property (nonatomic) int reason;
@property (nonatomic) _Bool hasOptions;
@property (nonatomic) unsigned int options;
@property (nonatomic, readonly) _Bool hasSyncCirclePrefix;
@property (retain, nonatomic) NSString *syncCirclePrefix;
@property (nonatomic, readonly) _Bool hasContainerID;
@property (retain, nonatomic) NSString *containerID;
@property (nonatomic, readonly) _Bool hasSyncUUID;
@property (retain, nonatomic) NSString *syncUUID;
@property (nonatomic, readonly) _Bool hasOperationUUID;
@property (retain, nonatomic) NSString *operationUUID;
@property (nonatomic, readonly) _Bool hasCloudKitUUID;
@property (retain, nonatomic) NSString *cloudKitUUID;
@property (nonatomic) _Bool hasHasCKManateeEnabled;
@property (nonatomic) _Bool hasCKManateeEnabled;
@property (nonatomic) _Bool hasHasInternalSettingManateeEnabled;
@property (nonatomic) _Bool hasInternalSettingManateeEnabled;
@property (nonatomic) _Bool hasPcsReportManateeStatus;
@property (nonatomic) unsigned long long pcsReportManateeStatus;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)reasonAsString:(int)arg1;
- (int)StringAsReason:(id)arg1;
- (id)operationAsString:(int)arg1;
- (int)StringAsOperation:(id)arg1;

@end
