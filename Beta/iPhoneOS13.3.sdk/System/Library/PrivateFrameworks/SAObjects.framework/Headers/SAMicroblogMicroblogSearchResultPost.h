/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAMicroblogMicroblogSearchResultBase.h>

@class NSArray, NSDate, NSString, NSURL, SADecoratedString, SAMicroblogTwitterPostAuthor, SAUIAppPunchOut;

@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase

@property (copy, nonatomic) NSDate *creationTime;
@property (retain, nonatomic) SADecoratedString *decoratedContent;
@property (copy, nonatomic) NSArray *embeddedHashtags;
@property (copy, nonatomic) NSArray *embeddedImages;
@property (copy, nonatomic) NSArray *embeddedLinks;
@property (copy, nonatomic) NSArray *embeddedMentions;
@property (nonatomic) long long favoritesCount;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (retain, nonatomic) SAMicroblogTwitterPostAuthor *retweetAuthor;
@property (nonatomic) long long retweetCount;
@property (copy, nonatomic) NSURL *webAddress;

+ (id)microblogSearchResultPost;
+ (id)microblogSearchResultPostWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
