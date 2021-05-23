/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _WBSFieldLabelPatternMatcherFactory : NSObject

{
    NSMutableDictionary *_trie;
}

+ (struct __WBSFieldLabelPatternMatcherArray *)createFieldLabelPatternMatcherArrayFromWordArrays:(id)arg1 allowingEndOfWordMatches:(_Bool)arg2;

- (id)init;
- (void)_addWord:(id)arg1 allowingEndOfWordMatch:(_Bool)arg2;

@end
