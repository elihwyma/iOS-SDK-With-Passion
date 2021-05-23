/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary, WLKURLRequestProperties;

@interface WLKUTSNetworkRequestOperation : WLKNetworkRequestOperation

{
    NSDictionary *_responseDictionary;
    _Bool _didHandleInvalidConfig;
    WLKURLRequestProperties *_requestProperties;
    unsigned long long _environmentHash;
}

@property (nonatomic) unsigned long long environmentHash;
@property (retain, nonatomic) WLKURLRequestProperties *requestProperties;
@property _Bool didHandleInvalidConfig;

- (id)init;
- (id)shortDescription;
- (id)responseDictionary;
- (id)initWithRequestProperties:(id)arg1;
- (void)prepareURLRequest:(CDUnknownBlockType)arg1;
- (void)processResponse;
- (void)handleResult:(id)arg1 error:(id)arg2;

@end
