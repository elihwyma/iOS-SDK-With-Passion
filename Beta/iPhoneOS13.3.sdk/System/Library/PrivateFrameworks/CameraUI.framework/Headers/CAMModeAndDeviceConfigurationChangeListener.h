/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMModeAndDeviceConfigurationChangeListener : NSObject

{
    long long _desiredMode;
    long long _desiredDevicePosition;
    CDUnknownBlockType _handler;
}

@property (nonatomic) long long desiredMode;
@property (nonatomic) long long desiredDevicePosition;
@property (copy, nonatomic) CDUnknownBlockType handler;

@end
