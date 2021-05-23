/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IKRestrictionsUtilities : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ratingForRestrictionRanking:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3;
+ (id)_ratingDictionaryForDomain:(id)arg1 countryCode:(id)arg2;
+ (id)_purgableRatingsDictionary;
+ (id)orderedRankingsInDomain:(id)arg1 countryCode:(id)arg2;
+ (id)rankingForRestrictionRating:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3;

- (void)cache:(id)arg1 willEvictObject:(id)arg2;

@end
