/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@interface RERelevanceEngineDiagnosticRegistration : RESingleton

{
    _Bool _supportsRegistration;
}

- (id)_init;
- (void)checkinEngine:(id)arg1;
- (id)_defaultRegistrationDirectory;
- (id)_processesFileURL;
- (id)_allProcesses;
- (void)_accessEngineDataForProcess:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAvailableEngines:(CDUnknownBlockType)arg1;

@end
