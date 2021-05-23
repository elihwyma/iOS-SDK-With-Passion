/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, NSURL;

@interface SAGuidanceGuideDomainSnippet : SAUISnippet

@property (copy, nonatomic) NSString *domainAlternateDisplayName;
@property (copy, nonatomic) NSString *domainDisplayName;
@property (copy, nonatomic) NSURL *domainIconURI;
@property (copy, nonatomic) NSString *domainName;
@property (nonatomic) _Bool enabledInOfflineMode;
@property (nonatomic) _Bool enabledInOnlineMode;
@property (copy, nonatomic) NSArray *guideSections;
@property (copy, nonatomic) NSString *iconDisplayIdentifier;
@property (nonatomic) _Bool iconNeedsProcessing;
@property (copy, nonatomic) NSString *iconResourceName;
@property (nonatomic) _Bool isAppIcon;
@property (nonatomic) _Bool performIntentEnabledAppAuthorizationCheck;
@property (copy, nonatomic) NSString *tagPhrase;

+ (id)guideDomainSnippet;
+ (id)guideDomainSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
