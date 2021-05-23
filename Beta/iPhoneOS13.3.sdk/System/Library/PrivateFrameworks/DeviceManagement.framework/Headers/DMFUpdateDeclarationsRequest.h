/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSArray, NSString;

@interface DMFUpdateDeclarationsRequest

{
    NSString *_organizationIdentifier;
    NSString *_syncToken;
    NSArray *_upsertDeclarations;
    NSArray *_removeDeclarations;
}

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *syncToken;
@property (copy, nonatomic) NSArray *upsertDeclarations;
@property (copy, nonatomic) NSArray *removeDeclarations;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
