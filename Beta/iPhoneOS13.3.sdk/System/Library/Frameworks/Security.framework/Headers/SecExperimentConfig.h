/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SecExperimentConfig : NSObject

{
    unsigned int _fleetSampleRate;
    unsigned int _deviceSampleRate;
    NSString *_identifier;
    NSDictionary *_configurationData;
    NSDictionary *_config;
}

@property (retain) NSString *identifier;
@property (retain) NSDictionary *config;
@property unsigned int fleetSampleRate;
@property unsigned int deviceSampleRate;
@property (retain) NSDictionary *configurationData;
@property (readonly) _Bool isSampled;

- (id)initWithConfiguration:(id)arg1;
- (unsigned int)hostHash;
- (_Bool)shouldRunWithSamplingRate:(id)arg1;

@end
