/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <MediaPlayer/MPStoreModelRequest.h>

@class NSArray;

@interface NMSStoreModelLookupRequest : MPStoreModelRequest

{
    NSArray *_containerIDs;
}

@property (copy, nonatomic) NSArray *containerIDs;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
