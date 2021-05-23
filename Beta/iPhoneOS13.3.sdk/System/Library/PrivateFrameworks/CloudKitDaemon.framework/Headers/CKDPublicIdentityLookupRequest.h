/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDCacheBasedRequest.h>

@class CKDDiscoverUserIdentitiesURLRequest, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPublicIdentityLookupRequest : CKDCacheBasedRequest

{
    CDUnknownBlockType _perLookupInfoProgressBlock;
    CDUnknownBlockType _lookupCompletionBlock;
    NSArray *_originalLookupInfosToFetch;
    NSMutableArray *_lookupInfosToFetch;
    CKDDiscoverUserIdentitiesURLRequest *_request;
}

@property (retain, nonatomic) NSArray *originalLookupInfosToFetch;
@property (retain, nonatomic) NSMutableArray *lookupInfosToFetch;
@property (retain, nonatomic) CKDDiscoverUserIdentitiesURLRequest *request;
@property (copy, nonatomic) CDUnknownBlockType perLookupInfoProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType lookupCompletionBlock;

+ (void)removeCacheForLookupInfos:(id)arg1 inCache:(id)arg2;

- (id)description;
- (void)finishWithError:(id)arg1;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (void)performRequest;
- (id)initWithLookupInfos:(id)arg1;
- (void)_receivedUserIdentity:(id)arg1 forLookupInfo:(id)arg2 error:(id)arg3;
- (_Bool)_tryComplete;
- (id)spawnURLRequests;
- (id)_generateOONPrivateKeyWithError:(id *)arg1;
- (void)_saveUserIdentity:(id)arg1 forLookupInfo:(id)arg2;

@end
