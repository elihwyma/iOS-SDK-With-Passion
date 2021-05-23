/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSDeviceIdentity, IDSMPConversationGroup, NSArray, NSString;

@interface IDSConversationGroupCypher : NSObject

{
    IDSMPConversationGroup *_conversationGroup;
    NSArray *_participants;
    IDSDeviceIdentity *_deviceIdentity;
}

@property (retain, nonatomic) IDSMPConversationGroup *conversationGroup;
@property (retain, nonatomic) NSArray *participants;
@property (nonatomic, readonly) IDSDeviceIdentity *deviceIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationGroup:(id)arg1 deviceIdentity:(id)arg2 participants:(id)arg3;
- (id)_memberList;
- (id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id *)arg3 error:(id *)arg4;
- (id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id *)arg5;

@end
