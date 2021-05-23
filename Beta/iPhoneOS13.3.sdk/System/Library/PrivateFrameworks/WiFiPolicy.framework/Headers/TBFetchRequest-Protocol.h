/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@class NSDictionary;

@protocol TBFetchRequestDescriptor;

@protocol TBFetchRequest <Swift>

@property (nonatomic, readonly) id <TBFetchRequestDescriptor> descriptor;
@property (nonatomic) unsigned long long sourcePolicy;
@property (copy, nonatomic) CDUnknownBlockType resultsHandler;
@property (copy, nonatomic) CDUnknownBlockType preferLocalHandler;
@property (nonatomic, readonly) _Bool cacheable;
@property (retain, nonatomic) NSDictionary *userInfo;

- (unsigned short)handleResponse: /* Error: Ran out of types for this method. */;

@end
