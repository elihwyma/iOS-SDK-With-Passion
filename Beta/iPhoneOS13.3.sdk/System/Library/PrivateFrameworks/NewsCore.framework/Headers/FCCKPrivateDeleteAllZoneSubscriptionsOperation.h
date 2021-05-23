/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@interface FCCKPrivateDeleteAllZoneSubscriptionsOperation : FCCKPrivateDatabaseOperation

{
    CDUnknownBlockType _deleteAllZoneSubscriptionsCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType deleteAllZoneSubscriptionsCompletionBlock;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end
