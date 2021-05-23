/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegAccountWebViewController.h>

@class NSString;

@protocol CNFRegAccountAuthorizationDelegate;

@interface CNFRegAccountAuthorizationController : CNFRegAccountWebViewController

{
    NSString *_authID;
    NSString *_authToken;
    id <CNFRegAccountAuthorizationDelegate> _delegate;
}

@property (copy, nonatomic) NSString *authID;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) id <CNFRegAccountAuthorizationDelegate> delegate;

- (void)dealloc;
- (id)bagKey;
- (id)logName;
- (id)initWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;

@end
