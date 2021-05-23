/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class SAMovieMovie;

@interface SAMovieMovieSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieMovie *movie;
@property (nonatomic) _Bool playTrailer;

+ (id)movieSnippet;
+ (id)movieSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
