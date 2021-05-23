/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, NSURL, SADecoratedString, SAMicroblogTwitterPostAuthor, SAUIAppPunchOut;

@interface SAMicroblogAceMicroblogSearchResult : SADomainObject

@property (retain, nonatomic) SAMicroblogTwitterPostAuthor *globalAuthor;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSArray *resultNews;
@property (copy, nonatomic) NSArray *resultPosts;
@property (copy, nonatomic) NSArray *resultUsers;
@property (retain, nonatomic) SADecoratedString *summary;
@property (copy, nonatomic) NSURL *webAddress;

+ (id)aceMicroblogSearchResult;
+ (id)aceMicroblogSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
