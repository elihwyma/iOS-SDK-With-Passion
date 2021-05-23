/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener;

@protocol FLFollowUpControllerDelegate;

@interface FLFollowUpController : NSObject

{
    NSString *_clientIdentifier;
    NSString *_machServiceName;
    NSXPCListener *_listener;
    id <FLFollowUpControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <FLFollowUpControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1;
- (void)postFollowUpItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pendingFollowUpItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)clearPendingFollowUpItems:(id *)arg1;
- (id)pendingFollowUpItems:(id *)arg1;
- (_Bool)postFollowUpItem:(id)arg1 error:(id *)arg2;
- (_Bool)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)clearNotificationForItem:(id)arg1 error:(id *)arg2;
- (id)initWithClientIdentifier:(id)arg1 xpcEndpoint:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1 machServiceName:(id)arg2 delegate:(id)arg3;
- (unsigned long long)countOfPendingFollowUpItems:(id *)arg1;
- (void)countOfPendingFollowUpItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearPendingFollowUpItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_postHSA2LoginNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postHSA2PasswordChangeForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postHSA2LoginCode:(id)arg1 withNotification:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_tearDownHSA2LoginNotificationWithPushMessageID:(id)arg1;
- (void)_postHSA2PasswordResetNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didActivateHSA2LoginNotification:(id)arg1;

@end
