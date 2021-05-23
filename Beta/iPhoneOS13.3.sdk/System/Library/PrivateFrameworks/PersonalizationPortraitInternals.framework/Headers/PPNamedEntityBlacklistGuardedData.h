/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface PPNamedEntityBlacklistGuardedData : NSObject

{
    NSSet *caseSensitiveExactMatches;
    NSSet *caseInsensitiveExactMatchesLowercase;
    NSArray *regexes;
}

@end
