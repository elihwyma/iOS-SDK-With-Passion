/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class SAMovieMovie;

@interface SAMovieShowtimeSelectionSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieMovie *movie;

+ (id)showtimeSelectionSnippet;
+ (id)showtimeSelectionSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
