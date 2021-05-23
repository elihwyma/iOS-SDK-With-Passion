/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class BSAction, NSString;

@interface SBLockScreenPluginAction : NSObject

{
    BSAction *_action;
    NSString *_label;
    long long _authenticationPolicy;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType completion;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long authenticationPolicy;

+ (id)action;
+ (id)actionWithCompletion:(CDUnknownBlockType)arg1;

- (id)init;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isCallAction;
- (_Bool)isInCallAction;
- (void)sendResponseWithSuccess:(_Bool)arg1;
- (_Bool)isApplicationAction;
- (_Bool)isEmergencyDialerAction;

@end
