/*
 Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
 */

#import <DADaemonSupport/DADREMXPCPerformerDelegate.h>

@class NSString;

@interface DADREMShareResponseDelegate : DADREMXPCPerformerDelegate

{
    NSString *_calendarID;
    NSString *_shareID;
}

@property (retain, nonatomic) NSString *calendarID;
@property (retain, nonatomic) NSString *shareID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)finishWithError:(id)arg1;
- (void)shareResponseFinishedWithError:(id)arg1;
- (void)_doResponseWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithAccountID:(id)arg1 calendarID:(id)arg2;
- (void)respondToShareRequestWithResponse:(long long)arg1;
- (void)reportAsJunk;

@end
