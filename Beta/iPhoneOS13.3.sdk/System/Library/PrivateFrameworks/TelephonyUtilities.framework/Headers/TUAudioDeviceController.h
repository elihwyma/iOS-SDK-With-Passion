/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class AVAudioClient, AVAudioDevice, NSArray, NSHashTable, NSString;

@protocol OS_dispatch_queue, TUAudioDeviceControllerActions;

@interface TUAudioDeviceController : NSObject

{
    AVAudioClient *_audioClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSHashTable *_delegates;
    id <TUAudioDeviceControllerActions> _actionsDelegate;
}

@property (retain, nonatomic) AVAudioClient *audioClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSHashTable *delegates;
@property (weak, nonatomic) id <TUAudioDeviceControllerActions> actionsDelegate;
@property (retain, nonatomic) AVAudioDevice *currentInputDevice;
@property (retain, nonatomic) AVAudioDevice *currentOutputDevice;
@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) NSArray *inputDevices;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1;
- (void)choosePreferredDeviceIfNecessary;

@end
