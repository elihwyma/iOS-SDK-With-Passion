/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSFileMultipleAccessClaim : NSFileAccessClaim

{
    NSMutableArray *_readingURLs;
    unsigned long long *_readingOptions;
    _Bool *_readingURLsDidChange;
    NSMutableArray *_writingURLs;
    unsigned long long *_writingOptions;
    _Bool *_writingURLsDidChange;
    NSMutableArray *_readingLocations;
    NSMutableArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    unsigned long long _currentlyLinkResolvingURLIndex;
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
- (_Bool)shouldBeRevokedPriorToInvokingAccessor;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(CDUnknownBlockType)arg1;
- (id)initWithPurposeID:(id)arg1 intents:(id)arg2 claimer:(CDUnknownBlockType)arg3;

@end
