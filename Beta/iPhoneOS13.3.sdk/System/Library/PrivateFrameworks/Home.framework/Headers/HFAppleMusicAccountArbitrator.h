/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class ACAccount, NAFuture, NSSet;

@interface HFAppleMusicAccountArbitrator : NSObject

{
    _Bool _forceLogout;
    ACAccount *_account;
    NSSet *_accessories;
    CDUnknownBlockType _contextGenerator;
    long long _loginType;
    NAFuture *_activeArbitrationFuture;
}

@property (retain, nonatomic) NAFuture *activeArbitrationFuture;
@property (nonatomic, readonly) ACAccount *account;
@property (copy, nonatomic, readonly) NSSet *accessories;
@property (copy, nonatomic, readonly) CDUnknownBlockType contextGenerator;
@property (nonatomic) long long loginType;
@property (nonatomic) _Bool forceLogout;

- (id)init;
- (id)pendingArbitrationExecutionFuture;
- (id)initWithAccessories:(id)arg1 account:(id)arg2 contextGenerator:(CDUnknownBlockType)arg3;
- (long long)_resolvedLoginType:(id *)arg1;

@end
