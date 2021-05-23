/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString, SADistance, SAMovieV2ShowtimeSnippet;

@interface SAMovieV2TheaterShowtimeListCell : SADomainObject

@property (nonatomic) _Bool bookable;
@property (retain, nonatomic) SADistance *relativeDistance;
@property (retain, nonatomic) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property (copy, nonatomic) NSString *theaterName;

+ (id)theaterShowtimeListCell;
+ (id)theaterShowtimeListCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
