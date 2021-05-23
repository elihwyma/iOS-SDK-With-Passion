/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Foundation/NSObject.h>

@interface TSTimeLineFilter : NSObject

@property (nonatomic, readonly) CDStruct_4bcfbbae rateRatio;
@property (nonatomic, readonly) _Bool canConvertTime;

- (void)addTimestamps:(CDStruct_4bcfbbae)arg1;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)arg1;
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)arg1;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)arg1;
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)arg1;
- (void)resetFilter;

@end
