/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, SALocalSearchBusiness2;

@interface SAMovieV2MovieTheater : SADomainObject

@property (retain, nonatomic) SALocalSearchBusiness2 *business;
@property (copy, nonatomic) NSArray *movies;

+ (id)movieTheater;
+ (id)movieTheaterWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
