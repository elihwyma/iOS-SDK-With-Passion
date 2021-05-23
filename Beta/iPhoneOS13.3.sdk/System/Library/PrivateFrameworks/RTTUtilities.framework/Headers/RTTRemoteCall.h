/*
 Image: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
 */

#import <RTTUtilities/RTTCall.h>

@class NSMutableArray, NSObject, RPCompanionLinkClient, RPCompanionLinkDevice;

@protocol OS_dispatch_queue;

@interface RTTRemoteCall : RTTCall

{
    NSMutableArray *_devices;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    RPCompanionLinkClient *_client;
    RPCompanionLinkDevice *_pairedCallDevice;
}

@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) RPCompanionLinkDevice *pairedCallDevice;

- (void)stop;
- (void)start;
- (id)responseForRequest:(id)arg1;
- (id)initWithCall:(id)arg1;
- (_Bool)isLocallyHosted;
- (void)sendString:(id)arg1;
- (void)callDidReceiveText:(id)arg1 forUtterance:(id)arg2;
- (void)setupRapportClient;
- (void)updateCallWithRemoteFailure;
- (void)resetRapportClientAndInvalidate:(_Bool)arg1;
- (void)addDevice:(id)arg1;
- (void)sendCallIDChallengeToDevice:(id)arg1;
- (void)removeDevice:(id)arg1;

@end
