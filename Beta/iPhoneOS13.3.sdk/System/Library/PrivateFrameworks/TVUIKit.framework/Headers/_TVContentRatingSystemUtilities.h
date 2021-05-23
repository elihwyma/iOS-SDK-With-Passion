/*
 Image: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit
 */

#import <Foundation/NSObject.h>

@interface _TVContentRatingSystemUtilities : NSObject

+ (_Bool)_isRatingSystemForMovies:(long long)arg1;
+ (_Bool)_isRatingSystemForMusic:(long long)arg1;
+ (_Bool)_isRatingSystemForTV:(long long)arg1;
+ (id)stringForRatingSystem:(long long)arg1;
+ (long long)ratingSystemForString:(id)arg1;
+ (long long)ratingSystemKindForRatingSystem:(long long)arg1;
+ (id)_ratingSystemLookUpDictionary;
+ (id)_cleanedRatingSystem:(id)arg1;
+ (id)_ratingSystemStringLookUpDictionary;

@end
