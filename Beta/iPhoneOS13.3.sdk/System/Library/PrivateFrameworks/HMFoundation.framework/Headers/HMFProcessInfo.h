/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFBoolean, NSString;

@interface HMFProcessInfo

{
    CDStruct_6ad76789 *_auditToken;
    NSString *_applicationIdentifier;
    int _identifier;
    NSString *_name;
}

@property (copy, readonly) NSString *applicationIdentifier;
@property (copy, readonly, getter=isCodeSigned) HMFBoolean *codeSigned;
@property (copy, readonly, getter=isPlatformBinary) HMFBoolean *platformBinary;
@property (readonly) int identifier;
@property (copy, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)processInfo;
+ (id)logCategory;
+ (id)processInfoForXPCConnection:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(int)arg1;
- (id)valueForEntitlement:(id)arg1;
- (id)shortDescription;
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;
- (id)attributeDescriptions;
- (_Bool)getAuditToken:(CDStruct_6ad76789 *)arg1;

@end
