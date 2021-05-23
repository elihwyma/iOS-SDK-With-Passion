/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSString;

@interface SAMicroblogSocialCredential : AceObject

@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *personalizationPermission;
@property (copy, nonatomic) NSString *socialNetwork;
@property (copy, nonatomic) NSString *tokenSecret;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)socialCredential;
+ (id)socialCredentialWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
