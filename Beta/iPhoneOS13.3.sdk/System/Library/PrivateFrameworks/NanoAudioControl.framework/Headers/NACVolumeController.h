/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@interface NACVolumeController : NSObject

+ (id)localVolumeControllerWithAudioCategory:(id)arg1;
+ (id)localVolumeControllerWithRoute:(id)arg1;
+ (id)proxyVolumeControllerWithAudioCategory:(id)arg1;
+ (id)proxyVolumeControllerWithTarget:(id)arg1;
+ (id)demoVolumeControllerWithAudioCategory:(id)arg1;

@end
