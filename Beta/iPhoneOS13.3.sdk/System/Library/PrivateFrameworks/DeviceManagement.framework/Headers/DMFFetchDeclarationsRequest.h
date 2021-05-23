/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSArray, NSString;

@interface DMFFetchDeclarationsRequest

{
    _Bool _includeInternalState;
    _Bool _includePayloadContents;
    NSString *_organizationIdentifier;
    NSArray *_payloadIdentifiers;
}

@property (nonatomic) _Bool includeInternalState;
@property (nonatomic) _Bool includePayloadContents;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSArray *payloadIdentifiers;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
