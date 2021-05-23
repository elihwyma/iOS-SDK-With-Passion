/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class SRSensorPruner;

@interface SRSensorPrunerClient : NSObject

{
    SRSensorPruner *_pruner;
}

@property (weak) SRSensorPruner *pruner;

+ (id)prunerClientWithPruner:(id)arg1;

- (id)initWithPruner:(id)arg1;
- (void)resetDatastoreFiles:(id)arg1;

@end
