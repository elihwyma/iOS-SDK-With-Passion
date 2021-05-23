/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSPredicate;

@interface PRSRankingItemRelativeFeatureContext : NSObject

{
    unsigned short _relRankFeature;
    unsigned short _absRankFeature;
    NSPredicate *_predicate;
    CDUnknownBlockType _comparator;
}

@property (nonatomic) unsigned short relRankFeature;
@property (nonatomic) unsigned short absRankFeature;
@property (retain, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) CDUnknownBlockType comparator;

+ (id)_relativeContextsForFeatures:(id)arg1 currentTime:(double)arg2;
+ (void)_associatedPRSL2FeatureFromRelativeFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short *)arg2 relRankFeatureOut:(unsigned short *)arg3;
+ (id)_predicateForRelativeFeature:(unsigned long long)arg1 currentTime:(double)arg2;
+ (CDUnknownBlockType)_resultComparatorForRelativeFeature:(unsigned long long)arg1;
+ (id)relativeContextsForBundle:(id)arg1 currentTime:(double)arg2;
+ (id)relativeContextsForResultSetWithCurrentTime:(double)arg1;

- (id)initWithFeature:(unsigned long long)arg1 currentTime:(double)arg2;

@end
