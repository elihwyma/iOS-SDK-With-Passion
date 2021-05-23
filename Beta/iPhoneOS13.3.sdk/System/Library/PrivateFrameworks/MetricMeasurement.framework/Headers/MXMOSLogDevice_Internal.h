/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

@class NSString, OSLogDevice;

@interface MXMOSLogDevice_Internal : NSObject

{
    NSString *_name;
    NSString *_identifier;
    OSLogDevice *_rawDevice;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) OSLogDevice *rawDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithName:(id)arg1 identifier:(id)arg2;
- (id)initWithOSLogDevice:(id)arg1;

@end
