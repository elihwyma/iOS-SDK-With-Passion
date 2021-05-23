/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSArray, NSUUID, PBCodable;

@interface __NSURLSessionStatistics : NSObject

{
    void *report;
    NSUUID *_externallyVisibleNwActivity;
    NSArray *_externallyVisibleConnectionUUIDs;
}

@property (nonatomic, readonly) PBCodable *awdReport;
@property (nonatomic, readonly) unsigned int awdMetricID;
@property (nonatomic, readonly) NSUUID *nwActivity;
@property (nonatomic, readonly) NSUUID *taskUUID;
@property (nonatomic, readonly) NSArray *connectionUUIDS;
@property (retain) NSUUID *externallyVisibleNwActivity;
@property (retain) NSArray *externallyVisibleConnectionUUIDs;

+ (void)reportMetricsToSymptoms:(id)arg1;
+ (CDStruct_61067874 *)createCFNetworkTaskMetrics_s:(id)arg1;
+ (int)getTaskType:(id)arg1;
+ (int)getNetworkProtocol:(id)arg1;
+ (void)fillCFNetworkTransactionMetricStruct:(CDStruct_46ef296f *)arg1 from:(id)arg2;

- (void)dealloc;
- (id)initWithCFNetworkReport:(void *)arg1 length:(long long)arg2;

@end
