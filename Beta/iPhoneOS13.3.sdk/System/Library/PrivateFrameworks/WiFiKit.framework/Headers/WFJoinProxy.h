/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFJoinProxy : NSObject

{
    struct __WiFiDeviceClient *_device;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct __WiFiDeviceClient *device;

- (void)joinNetwork:(struct __WiFiNetwork *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_joinComplete:(int)arg1 userInfo:(struct __CFDictionary *)arg2 network:(struct __WiFiNetwork *)arg3;

@end
