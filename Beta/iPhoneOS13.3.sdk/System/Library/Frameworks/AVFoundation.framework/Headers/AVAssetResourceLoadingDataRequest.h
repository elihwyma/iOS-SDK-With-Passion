/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject

{
    AVAssetResourceLoadingDataRequestInternal *_dataRequest;
}

@property (nonatomic, readonly) long long requestedOffset;
@property (nonatomic, readonly) long long requestedLength;
@property (nonatomic, readonly) _Bool requestsAllDataToEndOfResource;
@property (nonatomic, readonly) long long currentOffset;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)respondWithData:(id)arg1;
- (struct __CFDictionary *)_requestInfo;
- (id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 requestsAllDataToEndOfResource:(_Bool)arg4 canSupplyIncrementalDataImmediately:(_Bool)arg5;
- (id)_loadingRequest;

@end
