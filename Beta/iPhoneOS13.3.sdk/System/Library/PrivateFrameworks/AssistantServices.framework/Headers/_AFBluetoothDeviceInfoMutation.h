/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFBluetoothDeviceInfo, NSString, NSUUID;

@interface _AFBluetoothDeviceInfoMutation : NSObject

{
    AFBluetoothDeviceInfo *_baseModel;
    NSString *_address;
    NSUUID *_deviceUID;
    unsigned int _vendorID;
    unsigned int _productID;
    _Bool _isAdvancedAppleAudioDevice;
    _Bool _supportsInEarDetection;
    _Bool _supportsVoiceTrigger;
    _Bool _supportsSpokenNotification;
    _Bool _supportsListeningModeANC;
    _Bool _supportsListeningModeTransparency;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasAddress:1;
        unsigned int hasDeviceUID:1;
        unsigned int hasVendorID:1;
        unsigned int hasProductID:1;
        unsigned int hasIsAdvancedAppleAudioDevice:1;
        unsigned int hasSupportsInEarDetection:1;
        unsigned int hasSupportsVoiceTrigger:1;
        unsigned int hasSupportsSpokenNotification:1;
        unsigned int hasSupportsListeningModeANC:1;
        unsigned int hasSupportsListeningModeTransparency:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setAddress:(id)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setVendorID:(unsigned int)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setDeviceUID:(id)arg1;
- (void)setIsAdvancedAppleAudioDevice:(_Bool)arg1;
- (void)setSupportsInEarDetection:(_Bool)arg1;
- (void)setSupportsVoiceTrigger:(_Bool)arg1;
- (void)setSupportsSpokenNotification:(_Bool)arg1;
- (void)setSupportsListeningModeANC:(_Bool)arg1;
- (void)setSupportsListeningModeTransparency:(_Bool)arg1;

@end
