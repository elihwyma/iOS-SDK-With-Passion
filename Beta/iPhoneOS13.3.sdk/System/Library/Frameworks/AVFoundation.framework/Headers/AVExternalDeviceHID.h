/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVExternalDeviceHIDInternal, NSString;

@interface AVExternalDeviceHID : NSObject

{
    AVExternalDeviceHIDInternal *_externalDeviceHID;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSString *screenID;
@property (nonatomic) long long inputMode;

- (void)dealloc;
- (id)_externalDevice;
- (id)_figEndpointHIDInputMode;
- (id)initWithExternalDeviceAndHIDDictionary:(id)arg1 hidDictionary:(id)arg2;

@end
