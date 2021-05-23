/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@class NSArray, NSDictionary, NSError, NSSet;

@protocol TBFetchResponse <Swift>

@property (nonatomic, readonly) NSArray *results;
@property (copy, nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSSet *tiles;
@property (nonatomic, readonly) NSDictionary *resultsByBSSID;

@end
