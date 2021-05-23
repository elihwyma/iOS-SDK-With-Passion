/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NLTokenizer, NSString, _PASCFBurstTrie;

@interface PPSentimentGuardedData : NSObject

{
    _PASCFBurstTrie *_tokenWeightTrie;
    NLTokenizer *_tokenizer;
    NSString *_abGroupIdentifier;
}

@end
