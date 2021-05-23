/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@interface SCKDatabasePollingCondition : NSObject

{
    double _minIntervalSinceLastSync;
}

@property (nonatomic, readonly) double minIntervalSinceLastSync;

- (id)initWithMinIntervalSinceLastSync:(double)arg1;

@end
