/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFAudioDeviceInfo, NSString, NSUUID;

@interface _AFAudioDeviceInfoMutation : NSObject

{
    AFAudioDeviceInfo *_baseModel;
    NSString *_route;
    _Bool _isRemoteDevice;
    NSUUID *_deviceUID;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasRoute:1;
        unsigned int hasIsRemoteDevice:1;
        unsigned int hasDeviceUID:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setRoute:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setDeviceUID:(id)arg1;
- (void)setIsRemoteDevice:(_Bool)arg1;

@end
