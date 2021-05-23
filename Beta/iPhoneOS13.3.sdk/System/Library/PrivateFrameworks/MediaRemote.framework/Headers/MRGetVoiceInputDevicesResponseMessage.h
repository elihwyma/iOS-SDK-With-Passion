/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *deviceIDs;
@property (nonatomic, readonly) long long errorCode;

- (unsigned long long)type;
- (id)initWithDeviceIDs:(id)arg1 errorCode:(long long)arg2;

@end
