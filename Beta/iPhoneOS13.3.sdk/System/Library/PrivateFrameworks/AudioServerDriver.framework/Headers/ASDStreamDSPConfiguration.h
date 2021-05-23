/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <Foundation/NSObject.h>

@class ASDDSPConfiguration;

@interface ASDStreamDSPConfiguration : NSObject

{
    ASDDSPConfiguration *_hardwareDSP;
}

@property (nonatomic, readonly) ASDDSPConfiguration *hardwareDSP;

- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end
