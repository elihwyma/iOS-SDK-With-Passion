/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <KeyboardServices/_KSCloudKitManager.h>

@interface _KSUserWordsSynchroniserCloudKitManager : _KSCloudKitManager

- (_Bool)needsDeviceToDevice;
- (void)setupSubscription;

@end
