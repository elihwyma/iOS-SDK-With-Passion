/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSOperation.h>

@class AVAsset, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface MBAssetLoaderOperation : NSOperation

{
    _Bool finished;
    _Bool executing;
    NSArray *_prefetchKeys;
    NSURL *_identifierURL;
    AVAsset *_asset;
    CDUnknownBlockType _preCompletionBlock;
}

@property (getter=isFinished) _Bool finished;
@property (getter=isExecuting) _Bool executing;
@property (retain, nonatomic) NSURL *identifierURL;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) NSArray *prefetchKeys;
@property (copy, nonatomic) CDUnknownBlockType preCompletionBlock;

- (void)start;
- (_Bool)isConcurrent;
- (void)finish;
- (id)initWithIdentifierURL:(id)arg1;

@end
