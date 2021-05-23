/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class EAAccessory;

@interface DSEADevice : NSObject

{
    EAAccessory *_device;
}

@property (retain, nonatomic) EAAccessory *device;

+ (id)deviceWithSerialNumber:(id)arg1;
+ (id)deviceWithModelNumber:(id)arg1;

- (id)information;
- (id)initWithSerialNumber:(id)arg1;
- (id)initWithModelNumber:(id)arg1;

@end
