/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCRateControlBandwidthEstimatorMap : NSObject

{
    unsigned int _mode;
    unsigned int _radioAccessTechnology;
    double _estimatedBandwidth;
    double _estimatedBandwidthUncapped;
    NSMutableDictionary *_estimatorMap;
    unsigned int _currentActiveEstimatorID;
    int _state;
}

@property (nonatomic) double estimatedBandwidth;
@property (nonatomic) double estimatedBandwidthUncapped;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mode;

- (id)init;
- (void)dealloc;
- (id)bandwidthEstimatorWithID:(unsigned int)arg1 isProbingSequence:(_Bool)arg2 isEndOfProbingSequence:(_Bool)arg3;
- (void)deregisterBandwidthEstimatorWithID:(unsigned int)arg1;

@end
