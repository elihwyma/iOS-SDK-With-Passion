/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSRegistrationControlDaemonResponseListener : NSObject

{
    IDSDaemonRequestTimer *_requestTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)registrationControlResponseForRequestID:(id)arg1 withError:(id)arg2;
- (void)registrationControlStatusResponseForRequestID:(long long)arg1 requestID:(id)arg2 withError:(id)arg3;
- (id)initWithRequestTimer:(id)arg1;

@end
