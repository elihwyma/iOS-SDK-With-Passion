/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSArray, NSString;

@interface DMFUpdateEnqueuedCommandsRequest

{
    NSString *_organizationIdentifier;
    NSArray *_addCommands;
    NSArray *_removeCommands;
}

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSArray *addCommands;
@property (copy, nonatomic) NSArray *removeCommands;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
