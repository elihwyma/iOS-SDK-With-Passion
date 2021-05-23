/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SRDevice : NSObject

{
    NSString *_name;
    NSString *_model;
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_deviceIdentifier;
    NSString *_buildVersion;
}

@property (copy) NSString *deviceIdentifier;
@property (copy) NSString *buildVersion;
@property (copy, readonly) NSString *name;
@property (copy, readonly) NSString *model;
@property (copy, readonly) NSString *systemName;
@property (copy, readonly) NSString *systemVersion;

+ (id)currentDevice;

- (void)dealloc;
- (id)sr_dictionaryRepresentation;
- (id)initWithDeviceDetails:(id)arg1;

@end
