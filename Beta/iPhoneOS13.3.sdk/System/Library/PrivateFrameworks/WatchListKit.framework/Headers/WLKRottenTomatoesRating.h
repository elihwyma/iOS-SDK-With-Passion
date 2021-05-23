/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface WLKRottenTomatoesRating : NSObject

{
    unsigned long long _freshness;
    NSNumber *_freshnessPercentage;
}

@property (nonatomic, readonly) unsigned long long freshness;
@property (copy, nonatomic, readonly) NSNumber *freshnessPercentage;

+ (unsigned long long)freshnessForString:(id)arg1;

- (id)init;
- (id)initWithFreshness:(unsigned long long)arg1 freshnessPercentage:(id)arg2;

@end
