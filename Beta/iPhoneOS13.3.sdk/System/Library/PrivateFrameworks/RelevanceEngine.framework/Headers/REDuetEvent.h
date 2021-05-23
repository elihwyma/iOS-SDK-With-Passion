/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, REFeatureValue;

@interface REDuetEvent : NSObject

{
    NSDateInterval *_interval;
    REFeatureValue *_value;
    double _confidence;
}

@property (nonatomic, readonly) NSDateInterval *interval;
@property (nonatomic, readonly) REFeatureValue *value;
@property (nonatomic, readonly) double confidence;

+ (id)eventWithInterval:(id)arg1 value:(id)arg2 confidence:(double)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
