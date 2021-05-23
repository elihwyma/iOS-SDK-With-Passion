/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, SALocalSearchBusiness2;

@interface SAMovieV2MovieListSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *movieListCells;
@property (retain, nonatomic) SALocalSearchBusiness2 *theater;

+ (id)movieListSnippet;
+ (id)movieListSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
