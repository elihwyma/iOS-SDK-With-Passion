/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECLocalActionReplayer.h>

@interface ECTransferActionReplayer : ECLocalActionReplayer

- (id)replayAction;
- (id)failActionWithError:(id)arg1;
- (id)_downLoadSourceMessagesInAction:(id)arg1;
- (id)_appendMessagesInAction:(id)arg1;
- (id)_transferItemsInAction:(id)arg1 isMove:(_Bool)arg2;
- (id)_deleteItemsInAction:(id)arg1;
- (id)_allCopyItemsBySourceRemoteIDsForAction:(id)arg1 failedItems:(id *)arg2;

@end
