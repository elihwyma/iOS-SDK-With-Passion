/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTHLSItem.h>

@interface MTHLSRollItem : MTHLSItem

{
    unsigned long long _duration;
}

@property (nonatomic) unsigned long long duration;

- (id)initWithStartOverallPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 metricsData:(id)arg3;
- (_Bool)containsOverallPosition:(unsigned long long)arg1;
- (unsigned long long)endOverallPosition;

@end
