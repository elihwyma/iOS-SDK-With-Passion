/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber;

@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest

{
    NSNumber *_memberDSID;
}

@property (copy, readonly) NSNumber *memberDSID;

- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFamilyMemberDSID:(id)arg1;

@end
