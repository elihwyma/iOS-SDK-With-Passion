/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKStatistics;

@interface HKHeartRateDisplayTypeContextResult : NSObject

{
    long long _context;
    HKStatistics *_statistics;
}

@property (nonatomic) long long context;
@property (retain, nonatomic) HKStatistics *statistics;

- (id)debugDescription;
- (id)initWithContext:(long long)arg1 statistics:(id)arg2;

@end
