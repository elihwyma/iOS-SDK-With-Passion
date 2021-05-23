/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <Foundation/NSObject.h>

@interface HAPBTLETuple : NSObject

{
    int _maxHAPConnections;
    float _minBandwidth;
    float _maxBandwidth;
    unsigned long long _atvState;
    struct BTStatus _state;
}

@property (nonatomic) unsigned long long atvState;
@property (nonatomic) struct BTStatus state;
@property (nonatomic) int maxHAPConnections;
@property (nonatomic) float minBandwidth;
@property (nonatomic) float maxBandwidth;

+ (id)makeTupleWithATVState:(unsigned long long)arg1 MaxHAPConnections:(int)arg2;
+ (id)atvState2String:(unsigned long long)arg1;
+ (void)bandwidthFromATVState:(unsigned long long)arg1 MinBandwidth:(float *)arg2 MaxBandwidth:(float *)arg3;
+ (id)makeTupleWithATVState:(unsigned long long)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;
+ (id)state2String:(struct BTStatus *)arg1;
+ (id)makeTupleWithState:(struct BTStatus *)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;

- (id)description;

@end
