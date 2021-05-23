/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSDictionary;

@interface FADispatchFamilyPushRequest : FAFamilyCircleRequest

{
    NSDictionary *_payload;
}

@property (copy, readonly) NSDictionary *payload;

- (id)initWithPayload:(id)arg1;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
