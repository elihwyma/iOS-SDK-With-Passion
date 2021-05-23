/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class MFMessageInfo, MFMessageInfoOrderedSet, NSArray;

@interface MFMessageCollectionInfo : NSObject

{
    MFMessageInfoOrderedSet *_messageInfoSet;
    long long _messageCollectionHash;
}

@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) MFMessageInfo *firstMessage;
@property (nonatomic, readonly) MFMessageInfo *lastMessage;
@property (nonatomic, readonly) unsigned long long messagesCount;
@property (nonatomic, readonly) unsigned long long messageCountWithDuplicates;
@property (nonatomic, readonly) NSArray *uniqueMessageInfos;
@property (nonatomic, readonly) NSArray *allMessageInfos;
@property (nonatomic, readonly) long long messageCollectionHash;
@property (copy, nonatomic) CDUnknownBlockType duplicatePreferenceComparator;

+ (unsigned long long)stateForMessages:(id)arg1;

- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)state;
- (unsigned long long)addMessageInfo:(id)arg1;
- (unsigned long long)indexOfMessageInfo:(id)arg1;
- (unsigned long long)removeMessageInfo:(id)arg1;
- (unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)arg1;
- (id)messageInfoAtIndex:(unsigned long long)arg1;
- (id)messageInfoEquivalentToMessageInfo:(id)arg1;
- (id)duplicatesOfMessageInfo:(id)arg1;
- (id)initWithHash:(long long)arg1 comparator:(CDUnknownBlockType)arg2;
- (id)visibleMessageInfo;
- (void)mergeWithCollection:(id)arg1;

@end
