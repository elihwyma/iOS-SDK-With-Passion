/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSObject.h>

@class KCAESGCMDuplexSession, KCSRPClientContext, NSData, NSMutableDictionary, NSString, OTControl, OTJoiningConfiguration;

@protocol KCJoiningRequestSecretDelegate;

@interface KCJoiningRequestSecretSession : NSObject

{
    int _state;
    KCAESGCMDuplexSession *_session;
    id <KCJoiningRequestSecretDelegate> _secretDelegate;
    KCSRPClientContext *_context;
    unsigned long long _dsid;
    NSString *_piggy_uuid;
    unsigned long long _piggy_version;
    unsigned long long _epoch;
    NSData *_challenge;
    NSData *_salt;
    OTJoiningConfiguration *_joiningConfiguration;
    OTControl *_otControl;
    NSMutableDictionary *_defaults;
}

@property (weak) id <KCJoiningRequestSecretDelegate> secretDelegate;
@property (readonly) KCSRPClientContext *context;
@property (readonly) unsigned long long dsid;
@property (readonly) int state;
@property (retain) NSString *piggy_uuid;
@property unsigned long long piggy_version;
@property unsigned long long epoch;
@property (retain) NSData *challenge;
@property (retain) NSData *salt;
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration;
@property (retain, nonatomic) OTControl *otControl;
@property (retain, nonatomic) NSMutableDictionary *defaults;
@property (readonly) KCAESGCMDuplexSession *session;

+ (id)sessionWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id *)arg3;

- (id)description;
- (void)setConfiguration:(id)arg1;
- (_Bool)isDone;
- (id)stateString;
- (void)setControlObject:(id)arg1;
- (id)createUUID;
- (id)initialMessage:(id *)arg1;
- (_Bool)setupSession:(id *)arg1;
- (id)copyResponseForChallenge:(id)arg1 salt:(id)arg2 secret:(id)arg3 error:(id *)arg4;
- (id)copyResponseForSecret:(id)arg1 error:(id *)arg2;
- (id)handleChallengeData:(id)arg1 secret:(id)arg2 error:(id *)arg3;
- (id)handleChallenge:(id)arg1 secret:(id)arg2 error:(id *)arg3;
- (id)handleChallenge:(id)arg1 error:(id *)arg2;
- (id)handleVerification:(id)arg1 error:(id *)arg2;
- (id)processMessage:(id)arg1 error:(id *)arg2;
- (id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 rng:(struct ccrng_state *)arg3 error:(id *)arg4;

@end
