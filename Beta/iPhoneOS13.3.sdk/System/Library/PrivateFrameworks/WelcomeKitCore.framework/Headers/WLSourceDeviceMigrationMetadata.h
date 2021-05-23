/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface WLSourceDeviceMigrationMetadata : NSObject

{
    NSDate *_communicationDate;
    unsigned long long _state;
    unsigned long long _attemptCount;
    unsigned long long _crashCount;
    NSString *_deviceOSVersion;
    NSString *_deviceType;
    NSString *_deviceModel;
}

@property (retain, nonatomic) NSDate *communicationDate;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long attemptCount;
@property (nonatomic) unsigned long long crashCount;
@property (retain, nonatomic) NSString *deviceOSVersion;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *deviceModel;

@end
