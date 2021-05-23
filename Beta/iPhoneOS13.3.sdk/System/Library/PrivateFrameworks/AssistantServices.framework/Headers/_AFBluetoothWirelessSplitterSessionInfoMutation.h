/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFBluetoothWirelessSplitterSessionInfo, NSArray, NSString;

@interface _AFBluetoothWirelessSplitterSessionInfoMutation : NSObject

{
    AFBluetoothWirelessSplitterSessionInfo *_baseModel;
    long long _state;
    NSArray *_deviceAddresses;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasState:1;
        unsigned int hasDeviceAddresses:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setState:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setDeviceAddresses:(id)arg1;

@end
