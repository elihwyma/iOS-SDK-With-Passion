/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class TVRCDevice;

@interface TVRCVoiceRecorder : NSObject

{
    TVRCDevice *_device;
    _Bool _recordsAutomatically;
}

@property (nonatomic) _Bool recordsAutomatically;

- (void)stop;
- (void)start;
- (id)_initWithDevice:(id)arg1;

@end
