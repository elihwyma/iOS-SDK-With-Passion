/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NPAverage, NSDate, NSNumber, NSString, NWEndpoint, NWTCPConnection;

@protocol OS_dispatch_source;

@interface NPEdgeLatency : NSObject

{
    _Bool _probeTFO;
    _Bool _probeNoTFOCookie;
    _Bool _probeUseTFOHeuristics;
    _Bool _passedReprobeThreshold;
    _Bool _needReprobe;
    _Bool _isObserving;
    unsigned long long _edgeIndex;
    NWEndpoint *_probeEndpoint;
    unsigned long long _roundTripTime;
    NPAverage *_roundTripAverage;
    NPAverage *_roundTripAverageObserved;
    NSNumber *_addressFamily;
    long long _interfaceType;
    long long _TFOStatus;
    long long _probeCount;
    NSDate *_creationDate;
    long long _reprobeCount;
    NSObject<OS_dispatch_source> *_probeTimer;
    NWTCPConnection *_probeConnection;
    CDUnknownBlockType _probeCompletionHandler;
    NSNumber *_currentTimeout;
}

@property long long reprobeCount;
@property (retain) NSObject<OS_dispatch_source> *probeTimer;
@property (retain) NWTCPConnection *probeConnection;
@property (copy) CDUnknownBlockType probeCompletionHandler;
@property (retain) NSNumber *currentTimeout;
@property _Bool needReprobe;
@property _Bool isObserving;
@property unsigned long long edgeIndex;
@property (retain) NWEndpoint *probeEndpoint;
@property unsigned long long roundTripTime;
@property (retain) NPAverage *roundTripAverage;
@property (retain) NPAverage *roundTripAverageObserved;
@property (retain) NSNumber *addressFamily;
@property long long interfaceType;
@property _Bool probeTFO;
@property _Bool probeNoTFOCookie;
@property _Bool probeUseTFOHeuristics;
@property long long TFOStatus;
@property (readonly) NSString *addressFamilyString;
@property (readonly) NSString *TFOStatusString;
@property (readonly) NSString *connectionParametersString;
@property (readonly) _Bool isTFOEnabled;
@property long long probeCount;
@property (retain) NSDate *creationDate;
@property _Bool passedReprobeThreshold;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithProbeEndpoint:(id)arg1 probeTFO:(_Bool)arg2;
- (void)addRoundTripSample:(unsigned long long)arg1;
- (_Bool)fillTestLatency;
- (void)pingPong;
- (void)measureLatencyWithTimeout:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isMatched:(id)arg1 parameters:(struct networkParameters *)arg2;
- (void)addRoundTripSamples:(id)arg1;
- (unsigned long long)getRoundTripSample:(unsigned long long)arg1;
- (void)addRoundTripSampleObserved:(unsigned long long)arg1;
- (_Bool)isMatched:(id)arg1;
- (_Bool)isComplete:(_Bool)arg1;

@end
