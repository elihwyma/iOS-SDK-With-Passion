/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegSecureAccountWebViewController.h>

@protocol CNFRegViewAccountControllerDelegate;

@interface CNFRegViewAccountController : CNFRegSecureAccountWebViewController

{
    id <CNFRegViewAccountControllerDelegate> _delegate;
}

@property (nonatomic) id <CNFRegViewAccountControllerDelegate> delegate;

- (void)dealloc;
- (id)bagKey;
- (id)logName;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;

@end
