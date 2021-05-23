/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <Foundation/NSObject.h>

@class MXAppLaunchMetric, MXAppResponsivenessMetric, MXAppRunTimeMetric, MXCPUMetric, MXCellularConditionMetric, MXDiskIOMetric, MXDisplayMetric, MXGPUMetric, MXLocationActivityMetric, MXMemoryMetric, MXMetaData, MXNetworkTransferMetric, NSArray, NSDate, NSString;

@interface MXMetricPayload : NSObject

{
    _Bool _includesMultipleApplicationVersions;
    NSString *_latestApplicationVersion;
    NSDate *_timeStampBegin;
    NSDate *_timeStampEnd;
    MXCPUMetric *_cpuMetrics;
    MXGPUMetric *_gpuMetrics;
    MXCellularConditionMetric *_cellularConditionMetrics;
    MXAppRunTimeMetric *_applicationTimeMetrics;
    MXLocationActivityMetric *_locationActivityMetrics;
    MXNetworkTransferMetric *_networkTransferMetrics;
    MXAppLaunchMetric *_applicationLaunchMetrics;
    MXAppResponsivenessMetric *_applicationResponsivenessMetrics;
    MXDiskIOMetric *_diskIOMetrics;
    MXMemoryMetric *_memoryMetrics;
    MXDisplayMetric *_displayMetrics;
    NSArray *_signpostMetrics;
    MXMetaData *_metaData;
}

@property (retain) MXCPUMetric *cpuMetrics;
@property (retain) MXGPUMetric *gpuMetrics;
@property (retain) MXCellularConditionMetric *cellularConditionMetrics;
@property (retain) MXAppRunTimeMetric *applicationTimeMetrics;
@property (retain) MXLocationActivityMetric *locationActivityMetrics;
@property (retain) MXNetworkTransferMetric *networkTransferMetrics;
@property (retain) MXAppLaunchMetric *applicationLaunchMetrics;
@property (retain) MXAppResponsivenessMetric *applicationResponsivenessMetrics;
@property (retain) MXDiskIOMetric *diskIOMetrics;
@property (retain) MXMemoryMetric *memoryMetrics;
@property (retain) MXDisplayMetric *displayMetrics;
@property (retain) NSArray *signpostMetrics;
@property (retain) MXMetaData *metaData;
@property (readonly) NSString *latestApplicationVersion;
@property (readonly) _Bool includesMultipleApplicationVersions;
@property (readonly) NSDate *timeStampBegin;
@property (readonly) NSDate *timeStampEnd;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)JSONRepresentation;
- (id)DictionaryRepresentation;
- (id)initWithPayloadData:(id)arg1 withMutipleAppVersions:(_Bool)arg2 withTimeStampBegin:(id)arg3 withTimeStampEnd:(id)arg4 withMetaData:(id)arg5 withMetrics:(id)arg6;
- (id)initWithAppVersion:(id)arg1 withMutipleAppVersions:(_Bool)arg2 withTimeStampBegin:(id)arg3 withTimeStampEnd:(id)arg4;

@end
