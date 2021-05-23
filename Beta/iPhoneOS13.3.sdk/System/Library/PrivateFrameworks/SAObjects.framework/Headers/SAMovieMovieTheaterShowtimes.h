/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SALocalSearchBusiness2;

@interface SAMovieMovieTheaterShowtimes : AceObject <Swift>

@property (copy, nonatomic) NSArray *movieShowtimes;
@property (copy, nonatomic) NSArray *showtimes;
@property (retain, nonatomic) SALocalSearchBusiness2 *theater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)movieTheaterShowtimes;
+ (id)movieTheaterShowtimesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
