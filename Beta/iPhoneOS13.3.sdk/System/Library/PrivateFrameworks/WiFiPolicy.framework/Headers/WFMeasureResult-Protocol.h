/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@class NSError;

@protocol WFMeasureResult <Swift>

@property (copy, nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) double downlinkThroughput;

@end
