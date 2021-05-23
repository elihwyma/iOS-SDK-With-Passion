/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class SAMovieMovie;

@interface SAMovieReviewsSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieMovie *movie;

+ (id)reviewsSnippet;
+ (id)reviewsSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
