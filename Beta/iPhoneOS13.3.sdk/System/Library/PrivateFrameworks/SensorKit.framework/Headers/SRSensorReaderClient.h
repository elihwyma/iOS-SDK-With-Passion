/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class SRSensorReader;

@interface SRSensorReaderClient : NSObject

{
    SRSensorReader *_reader;
}

@property (weak) SRSensorReader *reader;

+ (id)readerClientWithReader:(id)arg1;

- (void)resetDatastoreFiles:(id)arg1;
- (id)initWithReader:(id)arg1;

@end
