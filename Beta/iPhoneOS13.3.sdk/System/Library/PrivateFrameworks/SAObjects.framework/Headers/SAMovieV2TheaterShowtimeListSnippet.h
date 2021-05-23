/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAMovieV2MovieDetailSnippet;

@interface SAMovieV2TheaterShowtimeListSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
@property (copy, nonatomic) NSArray *theaterShowtimeListCells;

+ (id)theaterShowtimeListSnippet;
+ (id)theaterShowtimeListSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
