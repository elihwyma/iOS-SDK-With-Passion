/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegAuthorizedAccountWebViewController.h>

@class NSString;

@protocol CNFRegChangeAccountPasswordDelegate;

@interface CNFRegChangeAccountPasswordController : CNFRegAuthorizedAccountWebViewController

{
    id <CNFRegChangeAccountPasswordDelegate> _delegate;
    NSString *_appleID;
}

@property (copy, nonatomic) NSString *appleID;
@property (nonatomic) id <CNFRegChangeAccountPasswordDelegate> delegate;

- (void)dealloc;
- (id)bagKey;
- (id)logName;
- (id)initWithRegController:(id)arg1 appleID:(id)arg2;
- (id)overrideURLForURL:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (_Bool)canSendURLRequest:(id)arg1;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;

@end
