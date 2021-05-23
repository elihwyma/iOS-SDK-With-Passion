/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXNetworkTransferMetric : MXMetric

{
    NSMeasurement *_cumulativeWifiUpload;
    NSMeasurement *_cumulativeWifiDownload;
    NSMeasurement *_cumulativeCellularUpload;
    NSMeasurement *_cumulativeCellularDownload;
}

@property (readonly) NSMeasurement *cumulativeWifiUpload;
@property (readonly) NSMeasurement *cumulativeWifiDownload;
@property (readonly) NSMeasurement *cumulativeCellularUpload;
@property (readonly) NSMeasurement *cumulativeCellularDownload;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithCumulativeWifiUploadMeasurement:(id)arg1 cumulativeWifiDownloadMeasurement:(id)arg2 cumulativeCellularUploadMeasurement:(id)arg3 cumulativeCellularDownloadMeasurement:(id)arg4;

@end
