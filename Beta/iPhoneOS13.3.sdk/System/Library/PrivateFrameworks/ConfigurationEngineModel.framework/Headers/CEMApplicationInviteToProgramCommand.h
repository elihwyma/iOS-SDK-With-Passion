/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMCommandBase.h>

@class NSString;

@interface CEMApplicationInviteToProgramCommand : CEMCommandBase

{
    NSString *_payloadProgramID;
    NSString *_payloadInvitationURL;
}

@property (copy, nonatomic) NSString *payloadProgramID;
@property (copy, nonatomic) NSString *payloadInvitationURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 withProgramID:(id)arg2 withInvitationURL:(id)arg3;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withProgramID:(id)arg2 withInvitationURL:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)mustBeSupervised;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (int)executionLevel;

@end
