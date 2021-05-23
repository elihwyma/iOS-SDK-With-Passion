/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _PASCFBurstTrie;

@interface _ATXBundleIdSet : NSObject

{
    _PASCFBurstTrie *_trie;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)containsBundleId:(id)arg1;
- (id)trie;

@end
