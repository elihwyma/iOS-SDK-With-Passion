/*
 Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

#import <AudioServerApplication/ASAObject.h>

@class NSArray, NSMutableArray, NSObject;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ASACoreAudio : ASAObject

{
    unsigned int _cadPort;
    NSObject<OS_dispatch_source> *_deathSource;
    NSObject<OS_dispatch_queue> *_deathQueue;
    NSMutableArray *_clients;
    NSMutableArray *_plugins;
}

@property (copy, nonatomic, readonly) NSArray *boxObjectIDs;
@property (copy, nonatomic, readonly) NSArray *audioDeviceObjectIDs;
@property (copy, nonatomic, readonly) NSArray *deviceObjectIDs;
@property (copy, nonatomic, readonly) NSArray *clockDeviceObjectIDs;
@property (copy, nonatomic, readonly) NSArray *pluginObjectIDs;
@property (copy, nonatomic, readonly) NSArray *boxes;
@property (copy, nonatomic, readonly) NSArray *audioDevices;
@property (copy, nonatomic, readonly) NSArray *clockDevices;
@property (copy, nonatomic, readonly) NSArray *plugins;

+ (id)sharedCoreAudioObject;
+ (id)coreAudio;

- (void)dealloc;
- (void)addClient:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)addPlugin:(id)arg1;
- (void)removePlugin:(id)arg1;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (id)audioDeviceWithUID:(id)arg1;
- (id)pluginWithBundleID:(id)arg1;
- (unsigned int)audioDeviceObjectIDWithUID:(id)arg1;
- (id)initWithAudioObjectID:(unsigned int)arg1;
- (id)coreAudioClassName;
- (unsigned int)pluginObjectIDWithBundleID:(id)arg1;
- (unsigned int)boxObjectIDWithUID:(id)arg1;
- (unsigned int)clockDeviceObjectIDWithUID:(id)arg1;
- (id)boxWithUID:(id)arg1;
- (id)clockDeviceWithUID:(id)arg1;
- (void)_setupDeathSource;
- (void)_teardownDeathSource;
- (unsigned int)defaultInputAudioDeviceObjectID;
- (unsigned int)defaultOutputAudioDeviceObjectID;
- (unsigned int)defaultSystemOutputAudioDeviceObjectID;
- (unsigned int)transportManagerObjectIDWithBundleID:(id)arg1;
- (id)defaultInputAudioDevice;
- (id)defaultOutputAudioDevice;
- (id)defaultSystemOutputAudioDevice;
- (id)transportManagerWithBundleID:(id)arg1;

@end
