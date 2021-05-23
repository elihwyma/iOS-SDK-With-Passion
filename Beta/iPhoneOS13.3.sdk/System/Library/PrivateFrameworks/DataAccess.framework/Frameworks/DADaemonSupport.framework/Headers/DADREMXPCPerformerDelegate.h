/*
 Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
 */

#import <NSObject.h>

@class NSString;

@interface DADREMXPCPerformerDelegate : NSObject

{
    _Bool _finished;
    NSString *_accountID;
    NSString *_delegateID;
    CDUnknownBlockType _remXPCCompletion;
}

@property (retain, nonatomic) NSString *accountID;
@property (nonatomic) _Bool finished;
@property (retain, nonatomic) NSString *delegateID;
@property (copy, nonatomic) CDUnknownBlockType remXPCCompletion;

- (void)finishWithError:(id)arg1;
- (id)initWithAccountID:(id)arg1;

@end
