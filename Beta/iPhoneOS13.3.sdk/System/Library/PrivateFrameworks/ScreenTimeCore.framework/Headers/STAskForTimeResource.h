/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class STAskForTimeClient, STAskForTimeRequest;

@interface STAskForTimeResource : NSObject

{
    int _notificationToken;
    STAskForTimeClient *_askForTimeClient;
    STAskForTimeRequest *_request;
    CDUnknownBlockType _changeHandler;
}

@property (retain, nonatomic) STAskForTimeClient *askForTimeClient;
@property (nonatomic, readonly) STAskForTimeRequest *request;
@property (nonatomic, readonly) int notificationToken;
@property (nonatomic, readonly) CDUnknownBlockType changeHandler;

- (void)dealloc;
- (void)approveOneMoreMinuteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)approveAdditionalTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAdditionalTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkRequestForAdditionalTimeWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)_approveExceptionForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithResourceIdentifier:(id)arg1 resourceDisplayName:(id)arg2 usageType:(long long)arg3 changeHandler:(CDUnknownBlockType)arg4;
- (void)cancelOutstandingRequestsWithCompletion:(CDUnknownBlockType)arg1;

@end
