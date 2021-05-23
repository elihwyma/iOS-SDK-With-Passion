/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSPasswordWordList.h>

@class NSSet;

@interface WBSPasswordSetWordList : WBSPasswordWordList

{
    NSSet *_words;
}

- (void)enumerateEntriesForString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1 words:(id)arg2;

@end
