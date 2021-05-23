/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int contextType;
@property (nonatomic, readonly) NSArray *addingOutputDeviceUIDs;
@property (nonatomic, readonly) NSArray *removingOutputDeviceUIDs;
@property (nonatomic, readonly) NSArray *settingOutputDeviceUIDs;

+ (id)addDevicesRequestMessageWithContextType:(unsigned int)arg1 outputDeviceUIDs:(id)arg2;
+ (id)removeDevicesRequestMessageWithContextType:(unsigned int)arg1 outputDeviceUIDs:(id)arg2;
+ (id)setDevicesRequestMessageWithContextType:(unsigned int)arg1 outputDeviceUIDs:(id)arg2;

- (id)description;
- (unsigned long long)type;
- (id)initWithContextType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4;

@end
