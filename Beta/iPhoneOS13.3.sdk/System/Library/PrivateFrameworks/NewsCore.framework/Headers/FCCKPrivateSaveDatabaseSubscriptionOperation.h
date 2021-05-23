/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class CKNotificationInfo, NSString;

@interface FCCKPrivateSaveDatabaseSubscriptionOperation : FCCKPrivateDatabaseOperation

{
    NSString *_subscriptionID;
    CKNotificationInfo *_notificationInfo;
    CDUnknownBlockType _saveDatabaseSubscriptionCompletionBlock;
}

@property (copy, nonatomic) NSString *subscriptionID;
@property (copy, nonatomic) CKNotificationInfo *notificationInfo;
@property (copy, nonatomic) CDUnknownBlockType saveDatabaseSubscriptionCompletionBlock;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end
