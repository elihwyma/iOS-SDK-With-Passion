/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, VCMasterKeyIndex;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSecurityKeyManager : NSObject

{
    NSMutableDictionary *_sendKeys;
    NSMutableDictionary *_receiveKeys;
    VCMasterKeyIndex *_latestSendKeyIndex;
    VCMasterKeyIndex *_latestReceiveKeyIndex;
    VCMasterKeyIndex *_keyIndexNotReceived;
    _Bool _isSendKeysCleanUpPending;
    _Bool _isReceiveKeysCleanUpPending;
    id _delegate;
    NSObject<OS_dispatch_queue> *_keyManagerQueue;
    _Bool _isKeyIndexNotReceivedReported;
    double _lastKeyIndexNotReceived;
    id _reportingAgentWeak;
    NSMutableArray *_unknownKeyIndexList;
}

- (void)dealloc;
- (id)delegate;
- (struct opaqueRTCReporting *)reportingAgent;
- (id)initWithDelegate:(id)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;
- (_Bool)addSecurityKeyMaterial:(id)arg1;
- (void)pruneSendKeyMaterialWithDelay:(double)arg1;
- (void)pruneRecvKeyMaterialWithDelay:(double)arg1;
- (id)getRecvKeyMaterialWithIndex:(id)arg1;
- (id)getSendKeyMaterialWithIndex:(id)arg1;
- (id)getLatestSendKeyMaterial;
- (id)getLatestRecvKeyMaterial;

@end
