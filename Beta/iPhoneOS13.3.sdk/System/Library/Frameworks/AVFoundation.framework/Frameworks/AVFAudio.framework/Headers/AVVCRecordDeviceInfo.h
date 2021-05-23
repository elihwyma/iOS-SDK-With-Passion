/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface AVVCRecordDeviceInfo : NSObject

{
    _Bool _isRemoteDevice;
    unsigned int _remoteDeviceCategory;
    NSString *_recordRoute;
    NSString *_remoteProductIdentifier;
    NSUUID *_remoteDeviceUID;
}

@property (nonatomic, readonly) NSString *recordRoute;
@property (readonly) _Bool isRemoteDevice;
@property (nonatomic, readonly) NSString *remoteProductIdentifier;
@property (nonatomic, readonly) NSUUID *remoteDeviceUID;
@property (nonatomic, readonly) unsigned int remoteDeviceCategory;

- (void)dealloc;
- (id)initWithRecordingEngine:(struct AVVCRecordingEngine *)arg1;

@end
