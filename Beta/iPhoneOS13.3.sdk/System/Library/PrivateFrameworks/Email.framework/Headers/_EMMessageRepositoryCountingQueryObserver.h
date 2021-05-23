/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EFCancelationToken, EFPair, EFQuery, EMMailboxScope, EMMessageRepository, NSString;

@protocol EMMessageRepositoryCountQueryObserver;

__attribute__((visibility("hidden")))
@interface _EMMessageRepositoryCountingQueryObserver : NSObject

{
    EMMessageRepository *_repository;
    EFQuery *_query;
    EMMailboxScope *_serverCountMailboxScope;
    id <EMMessageRepositoryCountQueryObserver> _observer;
    EFCancelationToken *_token;
    EFPair *_queryIdentifier;
}

@property (readonly) EFPair *queryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)countDidChange:(long long)arg1 acknowledgementToken:(id)arg2;
- (void)recoverQueryWithRemoteConnection:(id)arg1;
- (void)performQueryWithRemoteConnection:(id)arg1;
- (id)initWithRepository:(id)arg1 queryIdentifier:(id)arg2 includingServerCountsForMailboxScope:(id)arg3 observer:(id)arg4;
- (void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(_Bool)arg2;

@end
