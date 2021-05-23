/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, SALocalSearchBusiness2, SAUIImageResource;

@interface SAMovieV2ShowtimeSnippet : SAUISnippet

@property (retain, nonatomic) SAUIImageResource *attributionLogo;
@property (copy, nonatomic) NSString *movieName;
@property (copy, nonatomic) NSArray *showtimes;
@property (retain, nonatomic) SALocalSearchBusiness2 *theater;
@property (copy, nonatomic) NSString *theaterName;

+ (id)showtimeSnippet;
+ (id)showtimeSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
