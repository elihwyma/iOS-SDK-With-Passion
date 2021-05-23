/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFGasQueryProxy : NSObject

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

- (void)gasQueryForRecords:(id)arg1 request:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_processGasResults:(id)arg1 error:(int)arg2;

@end
