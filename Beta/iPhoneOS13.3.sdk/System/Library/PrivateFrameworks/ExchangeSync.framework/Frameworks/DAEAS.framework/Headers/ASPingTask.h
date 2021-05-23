/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSSet;

@interface ASPingTask : ASTask

{
    NSSet *_folders;
    NSSet *_oldFolders;
    int _seconds;
    int _oldSeconds;
}

- (void)finishWithError:(id)arg1;
- (double)timeoutInterval;
- (void)loadRequest:(id)arg1;
- (id)folders;
- (int)heartbeat;
- (id)requestBody;
- (void)requestCancelTaskWithReason:(int)arg1;
- (_Bool)shouldHoldPowerAssertion;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (_Bool)shouldStallAfterConnectionLost;
- (id)initWithHeartbeat:(int)arg1 folders:(id)arg2 oldHeartbeat:(int)arg3 oldFolders:(id)arg4;
- (int)interfaceBinding;
- (_Bool)shouldHandleServerErrorRetryLater;
- (_Bool)shouldReportTimeInNetwork;

@end
