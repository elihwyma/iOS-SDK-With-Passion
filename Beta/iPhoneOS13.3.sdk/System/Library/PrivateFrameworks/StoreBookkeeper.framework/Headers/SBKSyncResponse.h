/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/SBKResponse.h>

@class SBKSyncResponseData;

__attribute__((visibility("hidden")))
@interface SBKSyncResponse : SBKResponse

{
    SBKSyncResponseData *_syncResponseData;
}

@property (readonly) SBKSyncResponseData *syncResponseData;

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;

- (void)deserializeResponseBodyWithTransaction:(id)arg1;

@end
