/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PPPeopleSuggesterCacheEntry : NSObject

{
    double _cacheTimeSecondsSince1970;
    NSArray *_identifiers;
}

@property (nonatomic) double cacheTimeSecondsSince1970;
@property (retain, nonatomic) NSArray *identifiers;

@end
