/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, SAMovieV2MovieDetailSnippet;

@interface SAMovieV2MovieListCell : SADomainObject

@property (copy, nonatomic) NSArray *displayableShowtimes;
@property (retain, nonatomic) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
@property (copy, nonatomic) NSString *movieName;
@property (copy, nonatomic) NSArray *posterImages;
@property (copy, nonatomic) NSNumber *qualityRating;
@property (copy, nonatomic) NSString *rating;
@property (copy, nonatomic) NSDate *theatricalReleaseDate;

+ (id)movieListCell;
+ (id)movieListCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
