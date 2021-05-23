/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *explicitUserPermission;
@property (copy, nonatomic) NSString *socialNetwork;

+ (id)getSocialCredential;
+ (id)getSocialCredentialWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
