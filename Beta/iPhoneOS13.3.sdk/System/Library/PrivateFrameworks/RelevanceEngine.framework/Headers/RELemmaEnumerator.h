/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NLTagger;

@interface RELemmaEnumerator : NSObject

{
    NLTagger *_tagger;
}

- (id)init;
- (_Bool)enumerateLemmasInString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
