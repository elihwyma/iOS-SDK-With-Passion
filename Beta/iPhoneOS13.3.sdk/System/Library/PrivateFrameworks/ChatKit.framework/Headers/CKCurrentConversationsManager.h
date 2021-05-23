/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class IMDoubleLinkedList, NSCountedSet, NSMutableDictionary;

@interface CKCurrentConversationsManager : NSObject

{
    NSCountedSet *_currentConversations;
    NSMutableDictionary *_idToNodeDictionary;
    IMDoubleLinkedList *_orderedKeys;
}

@property (retain, nonatomic) NSCountedSet *currentConversations;
@property (retain, nonatomic) NSMutableDictionary *idToNodeDictionary;
@property (retain, nonatomic) IMDoubleLinkedList *orderedKeys;
@property (nonatomic, readonly) unsigned long long cacheSize;

+ (id)sharedInstance;

- (void)removeConversation:(id)arg1;
- (void)addConversation:(id)arg1;
- (void)loadHistoryForConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(_Bool)arg2;
- (void)purgeConversations:(id)arg1;
- (void)pruneCacheToSize:(unsigned long long)arg1;
- (void)_prepareToDumpCachedConversation:(id)arg1;
- (void)purgeConversation:(id)arg1;
- (_Bool)_canDumpConversationFromCache:(id)arg1;
- (void)pruneCache;

@end
