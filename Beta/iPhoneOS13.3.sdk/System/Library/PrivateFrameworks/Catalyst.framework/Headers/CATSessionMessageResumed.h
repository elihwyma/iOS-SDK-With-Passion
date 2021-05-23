/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATSessionMessage.h>

@class NSArray, NSDictionary, NSUUID;

@interface CATSessionMessageResumed : CATSessionMessage

{
    NSUUID *_sessionUUID;
    NSDictionary *_serverUserInfo;
    NSArray *_pendingRemoteTaskUUIDs;
}

@property (copy, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSDictionary *serverUserInfo;
@property (copy, nonatomic) NSArray *pendingRemoteTaskUUIDs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1;

@end
