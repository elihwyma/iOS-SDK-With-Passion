/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EFMutableInt64Set, MFMessageInfo, NSArray, NSMutableArray, NSMutableDictionary;

@interface MFMessageInfoOrderedSet : NSObject

{
    EFMutableInt64Set *_knownMessageIDs;
    NSMutableArray *_mutableMessageInfos;
    NSMutableDictionary *_duplicateMessageInfos;
    CDUnknownBlockType _comparator;
    CDUnknownBlockType _duplicatePreferenceComparator;
}

@property (copy, nonatomic) CDUnknownBlockType comparator;
@property (copy, nonatomic) CDUnknownBlockType duplicatePreferenceComparator;
@property (nonatomic, readonly) NSArray *uniqueMessageInfos;
@property (nonatomic, readonly) NSArray *allMessageInfos;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long countWithDuplicates;
@property (nonatomic, readonly) MFMessageInfo *firstMessage;
@property (nonatomic, readonly) MFMessageInfo *lastMessage;

- (id)debugDescription;
- (void)_invalidate;
- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (unsigned long long)addMessageInfo:(id)arg1;
- (unsigned long long)indexOfMessageInfo:(id)arg1;
- (unsigned long long)removeMessageInfo:(id)arg1;
- (unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)arg1;
- (id)messageInfoAtIndex:(unsigned long long)arg1;
- (id)messageInfoEquivalentToMessageInfo:(id)arg1;
- (id)duplicatesOfMessageInfo:(id)arg1;
- (void)_addMessageInfoToDuplicates:(id)arg1;
- (void)_removeDuplicatesForMessageInfo:(id)arg1;
- (unsigned long long)_scanForMessageInfoSimilarTo:(id)arg1;
- (unsigned long long)removeMessageInfoAtIndex:(unsigned long long)arg1;
- (id)_duplicateMessageInfosForMessageInfo:(id)arg1;
- (void)removeMessageInfosAtIndexes:(id)arg1;
- (void)removeAllMessageInfos;
- (void)replaceMessageInfo:(id)arg1 withReplacement:(id)arg2 inPlace:(_Bool)arg3;
- (id)allDuplicatesOfMessageInfo:(id)arg1;
- (void)enumerateUniqueMessageInfosWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
