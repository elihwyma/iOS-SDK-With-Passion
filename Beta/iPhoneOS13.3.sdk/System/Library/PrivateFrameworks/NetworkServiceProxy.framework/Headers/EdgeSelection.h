/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSNumber;

@interface EdgeSelection : NSObject

{
    NSData *_networkSignature;
    NSNumber *_interfaceType;
    long long _trialCount;
    double _alpha;
    long long _windowSize;
    NSMutableDictionary *_edgeAttributesDict;
}

@property (retain, nonatomic) NSMutableDictionary *edgeAttributesDict;
@property (retain, nonatomic) NSData *networkSignature;
@property (retain, nonatomic) NSNumber *interfaceType;
@property (nonatomic) long long trialCount;
@property (nonatomic) double alpha;
@property (nonatomic) long long windowSize;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)_stochasticRewardFromRTT:(double)arg1;
- (id)initWithNetworkSignature:(id)arg1 interfaceType:(id)arg2 modelParams:(id)arg3;
- (void)trainEdgeSelectionModel:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getMinimumLatencyEdge:(CDUnknownBlockType)arg1;
- (void)getAttributesForEdge:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
