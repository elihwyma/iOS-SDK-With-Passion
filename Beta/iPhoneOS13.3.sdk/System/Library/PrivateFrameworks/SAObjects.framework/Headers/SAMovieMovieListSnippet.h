/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAMovieMovieListSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *movies;
@property (nonatomic) _Bool shouldShowRottenTomatoesRating;

+ (id)movieListSnippet;
+ (id)movieListSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
