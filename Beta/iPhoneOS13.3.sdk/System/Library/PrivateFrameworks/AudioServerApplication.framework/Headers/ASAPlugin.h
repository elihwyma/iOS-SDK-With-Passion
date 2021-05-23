/*
 Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

#import <AudioServerApplication/ASAObject.h>

@class NSArray, NSString, NSURL;

@interface ASAPlugin : ASAObject

@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSURL *resourceBundleURL;
@property (copy, nonatomic, readonly) NSString *manufacturer;
@property (copy, nonatomic, readonly) NSArray *boxObjectIDs;
@property (copy, nonatomic, readonly) NSArray *audioDeviceObjectIDs;
@property (copy, nonatomic, readonly) NSArray *clockDeviceObjectIDs;
@property (copy, nonatomic, readonly) NSArray *boxes;
@property (copy, nonatomic, readonly) NSArray *audioDevices;
@property (copy, nonatomic, readonly) NSArray *clockDevices;

+ (id)pluginWithBundleIdentifier:(id)arg1;

- (id)initWithBundleIdentifier:(id)arg1;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (id)audioDeviceWithUID:(id)arg1;
- (unsigned int)audioDeviceObjectIDWithUID:(id)arg1;
- (id)coreAudioClassName;
- (unsigned int)boxObjectIDWithUID:(id)arg1;
- (unsigned int)clockDeviceObjectIDWithUID:(id)arg1;
- (id)deviceObjectIDs;
- (id)boxWithUID:(id)arg1;
- (id)clockDeviceWithUID:(id)arg1;

@end
