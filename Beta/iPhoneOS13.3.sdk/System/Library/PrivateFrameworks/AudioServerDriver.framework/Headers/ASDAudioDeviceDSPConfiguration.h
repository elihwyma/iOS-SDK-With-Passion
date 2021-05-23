/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, NSString;

@interface ASDAudioDeviceDSPConfiguration : NSObject

{
    NSString *_name;
    NSSet *_underlyingDeviceProperties;
    NSSet *_dspDeviceProperties;
    NSArray *_inputDSP;
    NSArray *_outputDSP;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSSet *underlyingDeviceProperties;
@property (nonatomic, readonly) NSSet *dspDeviceProperties;
@property (nonatomic, readonly) NSArray *inputDSP;
@property (nonatomic, readonly) NSArray *outputDSP;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 name:(id)arg3;

@end
