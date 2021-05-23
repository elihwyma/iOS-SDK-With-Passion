/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMSetupAccessoryDescription;

@protocol HMSetupRemoteService;

@interface HFSetupPairingContext : NSObject

{
    _Bool _isTrustedOrigin;
    HMSetupAccessoryDescription *_setupAccessoryDescription;
    id <HMSetupRemoteService> _setupRemoteService;
}

@property (retain, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription;
@property (weak, nonatomic) id <HMSetupRemoteService> setupRemoteService;
@property (nonatomic) _Bool isTrustedOrigin;

- (id)init;
- (id)initWithSetupAccessoryDescription:(id)arg1 setupRemoteService:(id)arg2 isTrustedOrigin:(_Bool)arg3;

@end
