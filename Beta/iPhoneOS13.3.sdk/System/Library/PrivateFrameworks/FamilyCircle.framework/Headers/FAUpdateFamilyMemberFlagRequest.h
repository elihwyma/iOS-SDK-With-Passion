/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest

{
    NSNumber *_dsid;
    NSString *_flag;
    _Bool _enabled;
}

- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFamilyMemberDSID:(id)arg1 flag:(id)arg2 enabled:(_Bool)arg3;

@end
