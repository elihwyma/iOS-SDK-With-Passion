/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class SRSensorWriter;

@interface SRSensorWriterClient : NSObject

{
    SRSensorWriter *_writer;
}

@property (weak) SRSensorWriter *writer;

+ (id)sensorWriterClientWithWriter:(id)arg1;

- (void)setMonitoring:(_Bool)arg1;
- (void)resetDatastoreFiles:(id)arg1;
- (id)initWithWriter:(id)arg1;

@end
