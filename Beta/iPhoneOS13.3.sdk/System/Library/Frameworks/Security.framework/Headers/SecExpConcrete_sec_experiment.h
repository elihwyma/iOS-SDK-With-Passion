/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSString, SecExperiment;

__attribute__((visibility("hidden")))
@interface SecExpConcrete_sec_experiment : NSObject

{
    SecExperiment *innerExperiment;
    unsigned long long numRuns;
    unsigned long long successRuns;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (const char *)name;
- (id)initWithName:(const char *)arg1;
- (const char *)identifier;
- (id)initWithInnerExperiment:(id)arg1;
- (_Bool)experimentIsAllowedForProcess;
- (_Bool)isSamplingDisabledWithDefault:(_Bool)arg1;
- (_Bool)isSamplingDisabled;
- (id)copyExperimentConfiguration;

@end
