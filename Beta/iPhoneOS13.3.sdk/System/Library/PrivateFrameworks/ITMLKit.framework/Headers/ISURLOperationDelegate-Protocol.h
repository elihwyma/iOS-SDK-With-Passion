/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class NSNumber;

@protocol ISURLOperationDelegate <Swift>

@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

@end
