/*
 Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

#import <Foundation/NSObject.h>

@class PBCodable;

@interface AWDMetricContainer : NSObject

{
    PBCodable *_metric;
    unsigned int _metricId;
}

@property (retain, nonatomic) PBCodable *metric;
@property (nonatomic, readonly) unsigned int metricId;

- (id)initWithMetricId:(unsigned int)arg1;

@end
