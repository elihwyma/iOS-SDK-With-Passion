/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSString, SBSRemoteAlertHandle, TFFeedbackHandleConfiguration;

@interface TFFeedbackHandle : NSObject

{
    TFFeedbackHandleConfiguration *_configuration;
    SBSRemoteAlertHandle *_internalHandle;
    NSString *_logKey;
}

@property (nonatomic, readonly) TFFeedbackHandleConfiguration *configuration;
@property (retain, nonatomic) SBSRemoteAlertHandle *internalHandle;
@property (copy, nonatomic, readonly) NSString *logKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithConfiguration:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)presentFeedbackViewController;
- (void)invalidateFeedbackViewController;

@end
