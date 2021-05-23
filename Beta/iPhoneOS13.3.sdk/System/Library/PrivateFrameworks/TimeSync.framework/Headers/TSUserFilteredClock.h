/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Swift.h>

@interface TSUserFilteredClock : Swift

@property (nonatomic, readonly) unsigned long long nominalMachInterval;
@property (nonatomic, readonly) unsigned long long nominalDomainInterval;
@property (nonatomic, readonly) unsigned char filterShift;
@property (nonatomic, readonly, getter=isAdaptive) _Bool adaptive;

- (_Bool)addTimestampWithMachAbsolute:(unsigned long long)arg1 andDomainTime:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)resetFilterToNominal:(_Bool)arg1 error:(id *)arg2;
- (_Bool)resetSyncServiceWithError:(id *)arg1;

@end
