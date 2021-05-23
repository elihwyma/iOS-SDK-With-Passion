/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <SetupAssistantSupport/SASProximitySessionTransport.h>

@class CUMessageSession;

@interface SASProximitySessionSharingTransport : SASProximitySessionTransport

{
    CUMessageSession *_messageSession;
    CUMessageSession *_actionMessageSession;
}

@property (retain) CUMessageSession *messageSession;
@property (retain) CUMessageSession *actionMessageSession;

- (void)invalidate;
- (void)activate;
- (id)initWithMessageSession:(id)arg1;
- (void)sendData:(id)arg1 response:(CDUnknownBlockType)arg2;

@end
