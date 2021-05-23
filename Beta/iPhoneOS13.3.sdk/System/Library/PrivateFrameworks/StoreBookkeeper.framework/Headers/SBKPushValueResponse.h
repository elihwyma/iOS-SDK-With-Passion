/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/SBKResponse.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKPushValueResponse : SBKResponse

{
    NSString *_domainVersion;
    NSData *_conflictItemValuePayload;
    NSString *_conflictItemKey;
    NSString *_conflictItemVersionAnchor;
}

@property (readonly) NSString *domainVersion;
@property (readonly) NSData *conflictItemValuePayload;
@property (readonly) NSString *conflictItemKey;
@property (readonly) NSString *conflictItemVersionAnchor;

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;

- (void)deserializeResponseBodyWithTransaction:(id)arg1;

@end
