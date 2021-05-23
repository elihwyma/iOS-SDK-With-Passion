/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <ESDaemonSupport/ESDClientDelegate.h>

@class NSString;

@interface ESDClientShareResponseDelegate : ESDClientDelegate

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

- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)shareResponseFinishedWithError:(id)arg1;
- (void)_doResponseWithBlock:(CDUnknownBlockType)arg1;
- (void)respondToShareRequestWithResponse:(long long)arg1;
- (void)reportAsJunk;
- (id)initWithAccountID:(id)arg1 client:(id)arg2 calendarID:(id)arg3;

@end
