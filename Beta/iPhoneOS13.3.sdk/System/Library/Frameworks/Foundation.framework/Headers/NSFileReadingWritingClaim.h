/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileReadingWritingClaim : NSFileAccessClaim

{
    NSURL *_readingURL;
    _Bool _readingURLDidChange;
    unsigned long long _readingOptions;
    NSURL *_writingURL;
    _Bool _writingURLDidChange;
    unsigned long long _writingOptions;
    NSFileAccessNode *_readingLocation;
    NSFileAccessNode *_writingLocation;
    NSFileAccessNode *_rootNode;
    long long _readingLinkResolutionCount;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (id)allURLs;
- (void)granted;
- (void)invokeClaimer;
- (_Bool)shouldCancelInsteadOfWaiting;
- (_Bool)blocksClaim:(id)arg1;
- (void)devalueSelf;
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(CDUnknownBlockType)arg1;
- (id)initWithPurposeID:(id)arg1 readingURL:(id)arg2 options:(unsigned long long)arg3 writingURL:(id)arg4 options:(unsigned long long)arg5 claimer:(CDUnknownBlockType)arg6;

@end
