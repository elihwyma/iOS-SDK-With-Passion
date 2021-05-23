/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NFLazy, NFPromise;

@interface FCAssetKeyService : NSObject

{
    NFLazy *_session;
    NFLazy *_requestEncoder;
    NFPromise *_endpointURLPromise;
}

@property (nonatomic, readonly) NFLazy *session;
@property (nonatomic, readonly) NFLazy *requestEncoder;
@property (nonatomic, readonly) NFPromise *endpointURLPromise;

- (id)initWithConfigurationManager:(id)arg1;
- (void)_performHTTPRequestWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchWrappingKeysWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
