/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <DataAccessExpress/DADisableableObject.h>

@class ESDClient, NSString;

@interface ESDClientDelegate : DADisableableObject

{
    _Bool _finished;
    _Bool _consumerCancelled;
    NSString *_delegateID;
    ESDClient *_client;
    NSString *_accountID;
}

@property (weak, nonatomic) ESDClient *client;
@property (retain, nonatomic) NSString *accountID;
@property (nonatomic) _Bool finished;
@property (nonatomic) _Bool consumerCancelled;
@property (retain, nonatomic) NSString *delegateID;

- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)disable;
- (id)initWithAccountID:(id)arg1 client:(id)arg2;
- (void)userRequestsCancel;

@end
