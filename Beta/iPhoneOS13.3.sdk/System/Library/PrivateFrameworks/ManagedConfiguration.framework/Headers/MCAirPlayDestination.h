/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MCAirPlayDestination : NSObject

{
    NSString *_deviceID;
    NSString *_deviceName;
    NSString *_password;
}

@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *password;

@end
