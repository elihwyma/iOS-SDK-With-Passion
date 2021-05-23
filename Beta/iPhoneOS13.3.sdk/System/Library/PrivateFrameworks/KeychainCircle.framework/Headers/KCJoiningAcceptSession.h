/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSObject.h>

@class KCAESGCMDuplexSession, KCSRPServerContext, NSData, NSMutableDictionary, NSString, OTControl, OTJoiningConfiguration;

@protocol KCJoiningAcceptCircleDelegate, KCJoiningAcceptSecretDelegate;

@interface KCJoiningAcceptSession : NSObject

{
    int _state;
    int _piggy_version;
    unsigned long long _dsid;
    id <KCJoiningAcceptSecretDelegate> _secretDelegate;
    id <KCJoiningAcceptCircleDelegate> _circleDelegate;
    KCSRPServerContext *_context;
    KCAESGCMDuplexSession *_session;
    NSData *_startMessage;
    NSString *_piggy_uuid;
    NSData *_octagon;
    OTJoiningConfiguration *_joiningConfiguration;
    OTControl *_otControl;
    NSMutableDictionary *_defaults;
}

@property (readonly) unsigned long long dsid;
@property (weak) id <KCJoiningAcceptSecretDelegate> secretDelegate;
@property (weak) id <KCJoiningAcceptCircleDelegate> circleDelegate;
@property (readonly) KCSRPServerContext *context;
@property (readonly) KCAESGCMDuplexSession *session;
@property (readonly) int state;
@property (retain) NSData *startMessage;
@property (retain) NSString *piggy_uuid;
@property int piggy_version;
@property (retain) NSData *octagon;
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration;
@property (retain, nonatomic) OTControl *otControl;
@property (retain, nonatomic) NSMutableDictionary *defaults;

- (id)description;
- (void)setConfiguration:(id)arg1;
- (_Bool)isDone;
- (id)stateString;
- (void)setControlObject:(id)arg1;
- (_Bool)setupSession:(id *)arg1;
- (id)processMessage:(id)arg1 error:(id *)arg2;
- (id)initWithSecretDelegate:(id)arg1 circleDelegate:(id)arg2 dsid:(unsigned long long)arg3 rng:(struct ccrng_state *)arg4 error:(id *)arg5;
- (id)copyChallengeMessage:(id *)arg1;
- (_Bool)shouldAcceptOctagonRequests;
- (id)processInitialMessage:(id)arg1 error:(id *)arg2;
- (id)processResponse:(id)arg1 error:(id *)arg2;
- (id)processSOSApplication:(id)arg1 error:(id *)arg2;
- (id)createPairingMessageFromJoiningMessage:(id)arg1 error:(id *)arg2;
- (id)processApplication:(id)arg1 error:(id *)arg2;

@end
