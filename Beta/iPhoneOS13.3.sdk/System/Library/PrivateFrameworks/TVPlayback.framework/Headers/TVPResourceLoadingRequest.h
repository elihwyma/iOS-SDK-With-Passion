/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class AVAssetResourceLoadingRequest, NSDictionary, NSNumber, NSURL;

@interface TVPResourceLoadingRequest : NSObject

{
    AVAssetResourceLoadingRequest *_loadingRequest;
}

@property (nonatomic, readonly) AVAssetResourceLoadingRequest *loadingRequest;
@property (copy, nonatomic, readonly) NSNumber *avRequestID;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) _Bool isCancelled;

- (id)init;
- (void)finishLoadingWithError:(id)arg1;
- (id)initWithAssetResourceLoadingRequest:(id)arg1;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 renewalDate:(id)arg3 redirect:(id)arg4;
- (void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3;

@end
