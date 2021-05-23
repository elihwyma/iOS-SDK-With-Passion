/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CRKWiProxDeviceRegistration : NSObject

{
    NSDictionary *_devices;
    NSDictionary *_options;
}

@property (copy, nonatomic) NSDictionary *devices;
@property (copy, nonatomic) NSDictionary *options;

@end
