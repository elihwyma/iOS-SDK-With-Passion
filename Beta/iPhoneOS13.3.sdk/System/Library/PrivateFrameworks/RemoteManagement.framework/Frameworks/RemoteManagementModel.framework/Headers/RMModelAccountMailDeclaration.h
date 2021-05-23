/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@class NSNumber, NSString;

@interface RMModelAccountMailDeclaration

{
    NSString *_payloadEmailAccountDescription;
    NSString *_payloadEmailAccountName;
    NSString *_payloadEmailAccountType;
    NSString *_payloadEmailAddress;
    NSString *_payloadIncomingMailServerAuthentication;
    NSString *_payloadIncomingCredentials;
    NSString *_payloadIncomingMailServerHostName;
    NSNumber *_payloadIncomingMailServerPortNumber;
    NSNumber *_payloadIncomingMailServerUseSSL;
    NSString *_payloadOutgoingMailServerAuthentication;
    NSString *_payloadOutgoingCredentials;
    NSString *_payloadOutgoingMailServerHostName;
    NSNumber *_payloadOutgoingMailServerPortNumber;
    NSNumber *_payloadOutgoingMailServerUseSSL;
    NSNumber *_payloadPreventMove;
    NSNumber *_payloadPreventAppSheet;
    NSNumber *_payloadDisableMailRecentsSyncing;
    NSNumber *_payloadAllowMailDrop;
    NSString *_payloadIncomingMailServerIMAPPathPrefix;
}

@property (copy, nonatomic) NSString *payloadEmailAccountDescription;
@property (copy, nonatomic) NSString *payloadEmailAccountName;
@property (copy, nonatomic) NSString *payloadEmailAccountType;
@property (copy, nonatomic) NSString *payloadEmailAddress;
@property (copy, nonatomic) NSString *payloadIncomingMailServerAuthentication;
@property (copy, nonatomic) NSString *payloadIncomingCredentials;
@property (copy, nonatomic) NSString *payloadIncomingMailServerHostName;
@property (copy, nonatomic) NSNumber *payloadIncomingMailServerPortNumber;
@property (copy, nonatomic) NSNumber *payloadIncomingMailServerUseSSL;
@property (copy, nonatomic) NSString *payloadOutgoingMailServerAuthentication;
@property (copy, nonatomic) NSString *payloadOutgoingCredentials;
@property (copy, nonatomic) NSString *payloadOutgoingMailServerHostName;
@property (copy, nonatomic) NSNumber *payloadOutgoingMailServerPortNumber;
@property (copy, nonatomic) NSNumber *payloadOutgoingMailServerUseSSL;
@property (copy, nonatomic) NSNumber *payloadPreventMove;
@property (copy, nonatomic) NSNumber *payloadPreventAppSheet;
@property (copy, nonatomic) NSNumber *payloadDisableMailRecentsSyncing;
@property (copy, nonatomic) NSNumber *payloadAllowMailDrop;
@property (copy, nonatomic) NSString *payloadIncomingMailServerIMAPPathPrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 emailAccountDescription:(id)arg2 emailAccountName:(id)arg3 emailAccountType:(id)arg4 emailAddress:(id)arg5 incomingMailServerAuthentication:(id)arg6 incomingCredentials:(id)arg7 incomingMailServerHostName:(id)arg8 incomingMailServerPortNumber:(id)arg9 incomingMailServerUseSSL:(id)arg10 outgoingMailServerAuthentication:(id)arg11 outgoingCredentials:(id)arg12 outgoingMailServerHostName:(id)arg13 outgoingMailServerPortNumber:(id)arg14 outgoingMailServerUseSSL:(id)arg15 preventMove:(id)arg16 preventAppSheet:(id)arg17 disableMailRecentsSyncing:(id)arg18 allowMailDrop:(id)arg19 incomingMailServerIMAPPathPrefix:(id)arg20;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 emailAccountType:(id)arg2 incomingMailServerAuthentication:(id)arg3 incomingMailServerHostName:(id)arg4 outgoingMailServerAuthentication:(id)arg5 outgoingMailServerHostName:(id)arg6;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
