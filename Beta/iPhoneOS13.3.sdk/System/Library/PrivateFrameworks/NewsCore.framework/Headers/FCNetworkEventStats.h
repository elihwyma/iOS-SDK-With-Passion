/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCNetworkEventStats : NSObject

{
    unsigned long long _count;
    unsigned long long _mean;
    unsigned long long _median;
    unsigned long long _percentile95;
    unsigned long long _min;
    unsigned long long _max;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long mean;
@property (nonatomic) unsigned long long median;
@property (nonatomic) unsigned long long percentile95;
@property (nonatomic) unsigned long long min;
@property (nonatomic) unsigned long long max;

- (id)initWithValues:(id)arg1;

@end
