/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWritingWritingClaim : NSFileAccessClaim

{
    NSURL *_url1;
    _Bool _url1DidChange;
    unsigned long long _options1;
    NSURL *_url2;
    _Bool _url2DidChange;
    unsigned long long _options2;
    NSFileAccessNode *_location1;
    NSFileAccessNode *_location2;
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
- (_Bool)blocksClaim:(id)arg1;
- (void)devalueSelf;
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)resolveURLsThenContinueInvokingClaimer:(CDUnknownBlockType)arg1;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 url:(id)arg4 options:(unsigned long long)arg5 claimer:(CDUnknownBlockType)arg6;

@end
