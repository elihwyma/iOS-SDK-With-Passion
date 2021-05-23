/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EFCancelationToken, NSArray, NSString;

@interface _EMMessageRepositoryMailboxPredictionObserver : NSObject

{
    NSArray *_messageObjectIDs;
    CDUnknownBlockType _completionHandler;
    EFCancelationToken *_cancelationToken;
}

@property (copy, nonatomic, readonly) NSArray *messageObjectIDs;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) EFCancelationToken *cancelationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)mailboxWasPredicted:(id)arg1;
- (void)recoverQueryWithRemoteConnection:(id)arg1;
- (void)performQueryWithRemoteConnection:(id)arg1;
- (id)initWithMessageObjectIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(_Bool)arg2;

@end
