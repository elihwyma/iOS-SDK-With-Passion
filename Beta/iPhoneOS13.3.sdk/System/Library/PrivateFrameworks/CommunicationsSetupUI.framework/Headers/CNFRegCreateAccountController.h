/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegAccountWebViewController.h>

@protocol CNFRegCreateAccountControllerDelegate;

@interface CNFRegCreateAccountController : CNFRegAccountWebViewController

{
    id <CNFRegCreateAccountControllerDelegate> _delegate;
}

@property (nonatomic) id <CNFRegCreateAccountControllerDelegate> delegate;

- (void)dealloc;
- (id)bagKey;
- (id)logName;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;

@end
