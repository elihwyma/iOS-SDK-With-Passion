/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SRWristDetection : NSObject

{
    unsigned char _wristDetectionRawValue;
}

@property (nonatomic) unsigned char wristDetectionRawValue;
@property (readonly) _Bool onWrist;
@property (readonly) long long wristLocation;
@property (readonly) long long crownOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)sr_dictionaryRepresentation;

@end
