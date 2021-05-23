/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAMicroblogGetSocialCredential.h>

@class NSString;

@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential

@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *consumerSecret;

+ (id)getTwitterCredential;
+ (id)getTwitterCredentialWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
