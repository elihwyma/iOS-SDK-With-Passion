/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface DSIOPSDevice : NSObject

{
    NSDictionary *_info;
}

@property (retain, nonatomic) NSDictionary *info;

+ (id)deviceWithDeviceIdentifier:(CDStruct_7523a67d)arg1;

- (id)serialNumber;
- (id)information;
- (id)initWithDeviceIdentifier:(CDStruct_7523a67d)arg1;

@end
