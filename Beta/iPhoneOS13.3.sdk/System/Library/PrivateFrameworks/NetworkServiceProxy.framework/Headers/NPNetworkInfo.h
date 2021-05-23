/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NPEdgeSelection, NSArray, NSDate, NSString;

@interface NPNetworkInfo : NSObject

{
    _Bool _hasIPv6;
    _Bool _isProbeInProgress;
    NSDate *_lastVisited;
    NSDate *_lastUsed;
    long long _lastFallbackReason;
    NSArray *_edgeLatencies;
    NSArray *_currentLatencyMap;
    NSDate *_probeRateLimit;
    NPEdgeSelection *_edgeSelection;
}

@property (retain) NSArray *edgeLatencies;
@property (retain) NSArray *currentLatencyMap;
@property (retain) NSDate *probeRateLimit;
@property (retain) NPEdgeSelection *edgeSelection;
@property _Bool isProbeInProgress;
@property (retain) NSDate *lastVisited;
@property (retain) NSDate *lastUsed;
@property (readonly) NSString *lastVisitedDesc;
@property (readonly) NSString *lastUsedDesc;
@property long long lastFallbackReason;
@property _Bool hasIPv6;

+ (_Bool)supportsSecureCoding;
+ (long long)failureReasonToFallbackReason:(unsigned int)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isLatency:(id)arg1 qualifiedForLatencyMap:(id)arg2 parameters:(struct networkParameters *)arg3 requireUniqueEdges:(_Bool)arg4;
- (long long)compareLastVisited:(id)arg1;
- (void)resortEdgeLatenciesUsingComparator:(CDUnknownBlockType)arg1;
- (void)rebuildLatencyMapWithViewSize:(id)arg1 edgeCount:(unsigned long long)arg2 parameters:(struct networkParameters *)arg3;
- (void)mergeNewLatencies:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)handleTFOFailedForAddressFamily:(unsigned char)arg1;

@end
