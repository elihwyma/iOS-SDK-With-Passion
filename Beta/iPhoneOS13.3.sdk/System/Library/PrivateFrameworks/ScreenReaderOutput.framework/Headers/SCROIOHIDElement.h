/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/SCROIOElement.h>

@class NSString;

@interface SCROIOHIDElement : SCROIOElement

{
    struct __IOHIDDevice *_hidDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)transport;
- (id)bluetoothAddress;
- (id)initWithIOObject:(unsigned int)arg1;
- (struct __IOHIDDevice *)hidDevice;

@end
