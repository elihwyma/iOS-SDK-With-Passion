/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString, SADistance, SAMovieV2MovieListSnippet;

@interface SAMovieV2TheaterListCell : SADomainObject

@property (retain, nonatomic) SADistance *relativeDistance;
@property (copy, nonatomic) NSString *theaterAddress;
@property (copy, nonatomic) NSString *theaterName;
@property (retain, nonatomic) SAMovieV2MovieListSnippet *theaterShowtimeListSnippet;

+ (id)theaterListCell;
+ (id)theaterListCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
