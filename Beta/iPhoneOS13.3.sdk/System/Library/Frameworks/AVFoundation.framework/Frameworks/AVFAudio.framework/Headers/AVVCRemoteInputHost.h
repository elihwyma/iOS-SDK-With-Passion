/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVVoiceController, NSMutableArray;

@protocol AVAudioRemoteInputPlugin;

__attribute__((visibility("hidden")))
@interface AVVCRemoteInputHost : NSObject

{
    NSMutableArray<AVAudioRemoteInputPlugin> *mPlugins;
    AVVoiceController *mMotherController;
}

- (void)dealloc;
- (void)inputPlugin:(id)arg1 didPublishDevice:(id)arg2;
- (void)inputPlugin:(id)arg1 didUnpublishDevice:(id)arg2;
- (id)initializePlugins;
- (void)invalidatePlugins;
- (id)allBundles:(id *)arg1;
- (id)findDeviceWithIdentifier:(id)arg1;
- (id)findFirstBluetoothDevice;
- (void)setParentVoiceController:(id)arg1;

@end
