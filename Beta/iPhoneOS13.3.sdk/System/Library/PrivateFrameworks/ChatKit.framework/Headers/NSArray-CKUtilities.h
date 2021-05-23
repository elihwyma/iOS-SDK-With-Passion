/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSArray.h>

@interface NSArray (CKUtilities)

- (id)__ck_indexSetForIndexPathItemsInSection:(long long)arg1;
- (id)__ck_indexesOfPartsOfMessage:(id)arg1;
- (unsigned long long)__ck_indexOfParentChatItemWithMesssageGUID:(id)arg1 associatedMessageRange:(struct _NSRange)arg2;
- (unsigned long long)__ck_indexOfTransfer:(id)arg1;
- (id)__ck_indexSetForIndexPathRowsInSection:(long long)arg1;
- (id)__ck_commaJoinedValueForKey:(id)arg1;
- (id)__ck_shuffledArray;
- (unsigned long long)__ck_indexOfChatItemWithGUID:(id)arg1;
- (unsigned long long)__ck_indexOfMediaObject:(id)arg1;
- (void)__ck_unloadSizesAtIndexes:(id)arg1;
- (void)__ck_unloadTranscriptTextAtIndexes:(id)arg1;
- (id)__ck_indexesOfUnplayedAudioMessages;
- (id)__ck_IMChatItemsAtIndexes:(id)arg1;
- (id)__ck_messageForChatItemAtIndex:(unsigned long long)arg1;
- (id)__ck_indexesOfPartsOfNonAttachmentMessages:(id)arg1;
- (id)__ck_indexesOfPartsOfMessages:(id)arg1;
- (id)__ck_chatItemWithGUID:(id)arg1;
- (id)__ck_parentChatItemWithMesssageGUID:(id)arg1 associatedMessageRange:(struct _NSRange)arg2;
- (id)composeRecipientAddresses;
- (id)composeRecipientHandles;
- (id)composeRecipientNormalizedAddresses;
- (_Bool)ck_containsObjectIdenticalTo:(id)arg1;
- (id)__ck_proxyWithBundleIdentifier:(id)arg1;

@end
