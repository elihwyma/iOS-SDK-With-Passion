/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class NSString;

@interface FBServiceClientAuthenticator : NSObject <Swift>

{
    NSString *_entitlement;
    unsigned long long _credentials;
}

@property (copy, nonatomic, readonly) NSString *entitlement;
@property (nonatomic, readonly) unsigned long long credentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedSystemClientAuthenticator;
+ (id)_errorForCode:(long long)arg1 process:(id)arg2 failedEntitlement:(id)arg3;
+ (id)sharedUIAppClientAuthenticator;
+ (id)sharedForegroundUIAppClientAuthenticator;
+ (_Bool)authenticateAuditToken:(CDStruct_6ad76789)arg1 forEntitlement:(id)arg2 error:(out id *)arg3;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithEntitlement:(id)arg1;
- (_Bool)authenticateClient:(id)arg1 error:(out id *)arg2;
- (_Bool)authenticateClient:(id)arg1;
- (id)initWithCredentials:(unsigned long long)arg1;
- (id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2;
- (int)_authenticateProcessHandle:(id)arg1 entitlement:(id)arg2 error:(out id *)arg3 withResult:(CDUnknownBlockType)arg4;
- (_Bool)authenticateAuditToken:(id)arg1 error:(out id *)arg2;
- (int)authenticateAuditToken:(CDStruct_6ad76789 *)arg1 forEntitlement:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (_Bool)authenticateAuditToken:(id)arg1;
- (int)authenticateAuditToken:(CDStruct_6ad76789 *)arg1 withResult:(CDUnknownBlockType)arg2;
- (int)authenticateClient:(id)arg1 withResult:(CDUnknownBlockType)arg2;

@end
