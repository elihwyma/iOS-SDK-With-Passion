/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/Swift-Protocol.h>

@class NSDate;

@protocol _DKHistoricalMonitor <Swift>

@property (copy, nonatomic) CDUnknownBlockType historicalHandler;
@property (copy, nonatomic) CDUnknownBlockType shutdownHandler;
@property (nonatomic, readonly) NSDate *lastUpdate;

- (unsigned short)update;

@end
