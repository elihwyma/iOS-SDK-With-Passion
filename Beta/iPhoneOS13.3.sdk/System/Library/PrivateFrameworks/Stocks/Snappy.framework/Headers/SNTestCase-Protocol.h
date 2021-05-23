/*
 Image: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
 */

#import <Snappy/Swift-Protocol.h>

@class NSArray, NSString;

@protocol SNTestCase <Swift>

@property (copy, nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) double timeoutInSeconds;
@property (nonatomic, readonly) unsigned long long aggregate;
@property (nonatomic, readonly) NSArray *requiredCapabilities;

@end
