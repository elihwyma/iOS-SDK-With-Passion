/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class SAMicroblogTwitterPostAuthor;

@interface SAMicroblogMicroblogSearchResultBase : SADomainObject

@property (retain, nonatomic) SAMicroblogTwitterPostAuthor *author;

+ (id)microblogSearchResultBase;
+ (id)microblogSearchResultBaseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
