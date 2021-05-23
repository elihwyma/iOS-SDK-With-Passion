/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface WLSRPServer : NSObject

{
    struct srp_st *_session;
    NSData *_salt_s;
    NSData *_serverPublicKey_B;
    NSData *_sharedKey_K;
    NSData *_hashOfProofOfMatch_HAMK;
}

@property (nonatomic, readonly) NSData *salt_s;
@property (nonatomic, readonly) NSData *serverPublicKey_B;
@property (nonatomic, readonly) NSData *sharedKey_K;
@property (nonatomic, readonly) NSData *hashOfProofOfMatch_HAMK;

- (void)dealloc;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (id)hmacDataForData:(id)arg1;
- (_Bool)didReceiveClientPublicKey_A:(id)arg1 proofOfMatch_M:(id)arg2;
- (_Bool)isHmacData:(id)arg1 validForData:(id)arg2;

@end
