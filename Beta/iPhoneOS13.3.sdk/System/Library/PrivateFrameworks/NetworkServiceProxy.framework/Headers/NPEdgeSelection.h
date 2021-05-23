/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkServiceProxy/EdgeSelection.h>

@class NPWaldo, NSDate, NSString;

@interface NPEdgeSelection : EdgeSelection

{
    NPWaldo *_waldoInfo;
    NSString *_bestEdge;
    unsigned long long _bestEdgeRTT;
    unsigned long long _bestEdgeProbedRTT;
    NSString *_nextBestEdge;
    unsigned long long _nextBestEdgeRTT;
    NSDate *_probeDate;
}

@property (retain) NSString *bestEdge;
@property unsigned long long bestEdgeRTT;
@property unsigned long long bestEdgeProbedRTT;
@property (retain) NSString *nextBestEdge;
@property unsigned long long nextBestEdgeRTT;
@property (retain) NSDate *probeDate;
@property (weak, nonatomic) NPWaldo *waldoInfo;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)trainEdgeSelection:(id)arg1 edgeRank:(unsigned long long)arg2 rtt:(unsigned long long)arg3;
- (void)getBestEdgeFromEdgeSelection;
- (_Bool)shouldProbeForEdgeSelection:(id)arg1 edgeRank:(long long *)arg2 edgeIndex:(long long *)arg3 bestEdgeLabel:(id *)arg4;
- (id)initWithWaldo:(id)arg1 signature:(id)arg2 interfaceType:(id)arg3;
- (void)updateEdgeSelection:(unsigned long long)arg1;
- (id)copyEdgeSelectionTelemetry;

@end
