/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFileAccessClaim.h>

@class NSArray, NSFileAccessNode, NSMutableDictionary, NSMutableSet, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSFileSubarbitrationClaim : NSFileAccessClaim

{
    NSArray *_readingURLs;
    unsigned long long _readingOptions;
    NSArray *_writingURLs;
    unsigned long long _writingOptions;
    NSXPCConnection *_subarbiterConnection;
    NSArray *_readingLocations;
    NSArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    NSMutableSet *_forwardedClaimIDs;
    NSMutableDictionary *_readRelinquishmentsByPresenterID;
    NSMutableDictionary *_writeRelinquishmentsByPresenterID;
    _Bool _nullified;
}

@property (readonly) _Bool nullified;
@property (retain) NSXPCConnection *subarbiterConnection;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithIndenting:(id)arg1;
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (void)revoked;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)forwardUsingConnection:(id)arg1 withServer:(id)arg2 crashHandler:(CDUnknownBlockType)arg3;
- (void)forwardRelinquishmentForWritingClaim:(_Bool)arg1 withID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 toPresenter:(id)arg6 usingReplySender:(CDUnknownBlockType)arg7;
- (void)forwardReacquisitionForWritingClaim:(_Bool)arg1 withID:(in id)arg2 toPresenterForID:(id)arg3 usingReplySender:(CDUnknownBlockType)arg4;
- (void)granted;
- (void)invokeClaimer;
- (void)devalueSelf;
- (void)evaluateNewClaim:(id)arg1;
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)devalueOldClaim:(id)arg1;
- (id)initWithReadingURLs:(id)arg1 options:(unsigned long long)arg2 writingURLs:(id)arg3 options:(unsigned long long)arg4 claimer:(CDUnknownBlockType)arg5;
- (id)relinquishmentForWrite:(_Bool)arg1 toPresenterForID:(id)arg2;

@end
