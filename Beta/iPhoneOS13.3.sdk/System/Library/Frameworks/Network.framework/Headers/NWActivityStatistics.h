/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSUUID, NWL2Report, PBCodable;

@interface NWActivityStatistics : NSObject

{
    unsigned int _awdMetricID;
    NSUUID *_externallyVisibleActivityUUID;
    NSUUID *_externallyVisibleParentUUID;
    NWL2Report *_layer2Report;
    PBCodable *_awdReport;
    NSUUID *_activityUUID;
    NSUUID *_parentUUID;
    struct nw_activity_report_s _report;
}

@property (nonatomic) struct nw_activity_report_s report;
@property (retain, nonatomic) PBCodable *awdReport;
@property (nonatomic) unsigned int awdMetricID;
@property (retain, nonatomic) NSUUID *activityUUID;
@property (retain, nonatomic) NSUUID *parentUUID;
@property (nonatomic, readonly) unsigned int domain;
@property (nonatomic, readonly) unsigned int label;
@property (nonatomic, readonly) _Bool retry;
@property (nonatomic, readonly) unsigned long long investigation_identifier;
@property (retain, nonatomic) NSUUID *externallyVisibleActivityUUID;
@property (retain, nonatomic) NSUUID *externallyVisibleParentUUID;
@property (retain, nonatomic) NWL2Report *layer2Report;

- (id)initWithNWActivityReport:(struct nw_activity_report_s *)arg1 length:(unsigned long long)arg2;

@end
