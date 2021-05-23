/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSCyclerRandomnessUtilities : NSObject

+ (void)initialize;
+ (unsigned long long)seed;
+ (id)randomString;
+ (void)setSeed:(unsigned long long)arg1;
+ (id)randomElementOfArray:(id)arg1;
+ (id)randomElementOfArray:(id)arg1 relativeProbabilities:(id)arg2;
+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)arg1;
+ (id)randomURL;
+ (void)reseed;
+ (id)_randomStringWithCharactersFromString:(id)arg1;

@end
