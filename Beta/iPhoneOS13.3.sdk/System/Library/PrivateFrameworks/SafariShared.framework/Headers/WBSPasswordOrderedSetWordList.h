/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSPasswordWordList.h>

@class NSOrderedSet;

@interface WBSPasswordOrderedSetWordList : WBSPasswordWordList

{
    NSOrderedSet *_words;
    _Bool _sensitive;
}

@property (nonatomic, readonly, getter=isSensitive) _Bool sensitive;

- (void)enumerateEntriesForString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1 isSensitive:(_Bool)arg2 orderedWordsArray:(id)arg3;
- (id)initWithIdentifier:(id)arg1 isSensitive:(_Bool)arg2 orderedWords:(id)arg3;

@end
