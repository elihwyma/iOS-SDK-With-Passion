/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class CdQwUTvJnDEPQgR8, NSMutableDictionary, PKDSPContext;

@interface PKDeviceScorer : NSObject

{
    CdQwUTvJnDEPQgR8 *_scorer;
    NSMutableDictionary *_scoreCompletions;
    double _deviceScoreTimeout;
    PKDSPContext *_context;
}

@property (nonatomic) double deviceScoreTimeout;
@property (copy, nonatomic, readonly) PKDSPContext *context;

+ (_Bool)deviceScoringSupported;

- (id)init;
- (id)initWithContext:(id)arg1;
- (id)_createScorer;
- (void)_getScoreWithNonce:(id)arg1 cryptogram:(id)arg2 challengeResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 nonce:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)peerPaymentDeviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
