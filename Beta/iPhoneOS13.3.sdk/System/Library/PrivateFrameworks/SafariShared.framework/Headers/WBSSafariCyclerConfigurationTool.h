/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class WBSCyclerServiceProxy;

@interface WBSSafariCyclerConfigurationTool : NSObject

{
    WBSCyclerServiceProxy *_cyclerProxy;
}

- (id)init;
- (void)run;
- (id)_supportedCommands;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_exitWithError:(id)arg1;
- (void)_printUsage;
- (id)_commandWithName:(id)arg1;
- (void)_runTest:(id)arg1;
- (void)_startCycler:(id)arg1;
- (void)_stopCycler:(id)arg1;
- (void)_resumeCycler:(id)arg1;
- (void)_setConfigurationOption:(id)arg1;
- (void)_sendRequestToTest:(id)arg1;
- (void)_configureDevice:(id)arg1;
- (void)_fetchStatus:(id)arg1;
- (void)_waitForCyclerToFinish:(id)arg1;

@end
