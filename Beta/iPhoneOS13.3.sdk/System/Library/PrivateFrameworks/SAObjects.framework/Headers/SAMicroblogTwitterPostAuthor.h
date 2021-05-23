/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString, NSURL;

@interface SAMicroblogTwitterPostAuthor : SADomainObject

@property (nonatomic) long long followersCount;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSURL *profileImageUrl;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSNumber *userId;
@property (nonatomic) _Bool verified;

+ (id)twitterPostAuthor;
+ (id)twitterPostAuthorWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
