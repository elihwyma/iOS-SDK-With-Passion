/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface ASDAudioDeviceDSPDatabase : NSObject

{
    NSString *_deviceUID;
    NSSet *_dspConfigurations;
    NSSet *_referencedUnderlyingDeviceProperties;
    NSSet *_referencedDSPDeviceProperties;
}

@property (nonatomic, readonly) NSString *deviceUID;
@property (nonatomic, readonly) NSSet *dspConfigurations;
@property (nonatomic, readonly) NSSet *referencedUnderlyingDeviceProperties;
@property (nonatomic, readonly) NSSet *referencedDSPDeviceProperties;

- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 deviceUID:(id)arg3;
- (id)dspConfigurationForDevice:(id)arg1;

@end
