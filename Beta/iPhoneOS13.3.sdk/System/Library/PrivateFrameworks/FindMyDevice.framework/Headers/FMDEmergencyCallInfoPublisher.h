/*
 Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

#import <Foundation/NSObject.h>

@class FMDEmergencyCallInfoPublisherConfiguration;

@interface FMDEmergencyCallInfoPublisher : NSObject

{
    FMDEmergencyCallInfoPublisherConfiguration *_publisherConfig;
}

@property (retain, nonatomic) FMDEmergencyCallInfoPublisherConfiguration *publisherConfig;

- (id)initWithConfiguration:(id)arg1;
- (void)publishInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
