/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUIMediaItemEntityTypesFetchResponse, VUIMediaItemEntityTypesFetchResponseChanges;

@interface VUIMediaItemEntityTypesFetchControllerResult : NSObject

{
    long long _fetchReason;
    VUIMediaItemEntityTypesFetchResponse *_fetchResponse;
    VUIMediaItemEntityTypesFetchResponseChanges *_fetchChanges;
}

@property (nonatomic) long long fetchReason;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *fetchResponse;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponseChanges *fetchChanges;

- (id)init;
- (id)description;
- (id)initWithFetchReason:(long long)arg1 fetchResponse:(id)arg2;

@end
