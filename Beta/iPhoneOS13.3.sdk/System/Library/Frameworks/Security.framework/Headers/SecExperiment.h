/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSString, SecExperimentConfig;

__attribute__((visibility("hidden")))
@interface SecExperiment : NSObject

{
    _Bool _samplingDisabled;
    NSString *_name;
    SecExperimentConfig *_cachedConfig;
}

@property (retain) NSString *name;
@property (nonatomic) _Bool samplingDisabled;
@property (retain) SecExperimentConfig *cachedConfig;
@property (readonly) NSString *identifier;

- (id)initWithName:(const char *)arg1;
- (_Bool)experimentIsAllowedForProcess;
- (_Bool)isSamplingDisabledWithDefault:(_Bool)arg1;
- (_Bool)isSamplingDisabled;
- (id)copyExperimentConfiguration;
- (id)copyExperimentConfigurationFromUserDefaults;
- (id)copyRemoteExperimentAsset;
- (id)copyRandomExperimentConfigurationFromAsset:(id)arg1;

@end
