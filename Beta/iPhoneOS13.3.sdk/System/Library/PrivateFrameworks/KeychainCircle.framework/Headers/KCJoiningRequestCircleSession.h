/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSObject.h>

@class KCAESGCMDuplexSession, OTControl, OTJoiningConfiguration;

@protocol KCJoiningRequestCircleDelegate;

@interface KCJoiningRequestCircleSession : NSObject

{
    int _state;
    NSObject<KCJoiningRequestCircleDelegate> *_circleDelegate;
    KCAESGCMDuplexSession *_session;
    unsigned long long _piggy_version;
    OTControl *_otControl;
    OTJoiningConfiguration *_joiningConfiguration;
}

@property (readonly) NSObject<KCJoiningRequestCircleDelegate> *circleDelegate;
@property (readonly) KCAESGCMDuplexSession *session;
@property int state;
@property (nonatomic) unsigned long long piggy_version;
@property (retain, nonatomic) OTControl *otControl;
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration;

+ (id)sessionWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id *)arg3;

- (_Bool)isDone;
- (void)attemptSosUpgrade;
- (void)setControlObject:(id)arg1;
- (id)initialMessage:(id *)arg1;
- (id)processMessage:(id)arg1 error:(id *)arg2;
- (void)setJoiningConfigurationObject:(id)arg1;
- (id)encryptedPeerInfo:(id *)arg1;
- (id)encryptedInitialMessage:(id)arg1 error:(id *)arg2;
- (id)handleCircleBlob:(id)arg1 error:(id *)arg2;
- (id)initWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)initWithCircleDelegate:(id)arg1 session:(id)arg2 otcontrol:(id)arg3 error:(id *)arg4;

@end
