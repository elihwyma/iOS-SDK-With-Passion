/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATSessionMessage.h>

@class NSDictionary, NSUUID;

@interface CATSessionMessageResume : CATSessionMessage

{
    NSUUID *_sessionUUID;
    NSDictionary *_clientUserInfo;
}

@property (copy, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSDictionary *clientUserInfo;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1;

@end
