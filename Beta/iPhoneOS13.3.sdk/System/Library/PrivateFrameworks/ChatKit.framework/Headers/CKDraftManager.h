/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDraftManager : NSObject

{
    NSMutableDictionary *_cachedDrafts;
    NSMutableSet *_dirtyDraftIDs;
    NSArray *_pendingRecipients;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)save:(_Bool)arg1;
- (void)flushCache;
- (void)setDraftForPendingConversation:(id)arg1 withRecipients:(id)arg2;
- (void)clearDraftForPendingConversation;
- (void)_setDraft:(id)arg1 forKey:(id)arg2;
- (id)_draftForKey:(id)arg1;
- (void)_clearDraftForConversation:(id)arg1;
- (id)_pendingRecipients;
- (void)_setPendingRecipients:(id)arg1;
- (id)_pendingRecipientsURL;
- (id)draftForConversation:(id)arg1;
- (void)setDraft:(id)arg1 forConversation:(id)arg2;
- (id)draftForPendingConversationWithRecipients:(id *)arg1;

@end
