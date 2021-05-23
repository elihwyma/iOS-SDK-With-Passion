/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PLQLDuetInMemoryCache : NSObject

{
    int _refCount;
    NSDictionary *_startArgs;
    NSDictionary *_stopArgs;
    double _startTime;
    double _stopTime;
    double _cellIn;
    double _cellOut;
    double _wifiIn;
    double _wifiOut;
}

@property (retain) NSDictionary *startArgs;
@property (retain) NSDictionary *stopArgs;
@property double startTime;
@property double stopTime;
@property double cellIn;
@property double cellOut;
@property double wifiIn;
@property double wifiOut;
@property int refCount;

- (id)init;
- (void)updateDataStats:(id)arg1;
- (id)initWithStartTime:(double)arg1 withStartargs:(id)arg2;
- (void)clearStop;
- (_Bool)isStartPresent;
- (_Bool)isStopPresent;
- (void)addDataWithCellIn:(double)arg1 withCellOut:(double)arg2 withWifiIn:(double)arg3 withWifiOut:(double)arg4;
- (void)addStartEvent:(double)arg1 withArgs:(id)arg2;
- (void)addStopEvent:(double)arg1 withArgs:(id)arg2;

@end
