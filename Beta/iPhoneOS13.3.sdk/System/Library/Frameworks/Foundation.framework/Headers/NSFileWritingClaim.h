/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWritingClaim : NSFileAccessClaim

{
    NSURL *_url;
    _Bool _urlDidChange;
    unsigned long long _options;
    NSFileAccessNode *_location;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(CDUnknownBlockType)arg4;
- (id)allURLs;
- (void)granted;
- (void)invokeClaimer;
- (_Bool)blocksClaim:(id)arg1;
- (void)devalueSelf;
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)resolveURLsThenContinueInvokingClaimer:(CDUnknownBlockType)arg1;

@end
