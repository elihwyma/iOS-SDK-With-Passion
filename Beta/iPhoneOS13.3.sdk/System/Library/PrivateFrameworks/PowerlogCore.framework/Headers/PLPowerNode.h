/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PLPowerNode : NSObject

{
    NSString *_name;
    double _fgEnergy;
    double _bgEnergy;
    double _fgTime;
    double _bgTime;
    double _bgAudioTime;
    double _bgLocationTime;
    NSArray *_rootNodeEnergyRows;
}

@property (retain) NSString *name;
@property double fgEnergy;
@property double bgEnergy;
@property double fgTime;
@property double bgTime;
@property double bgAudioTime;
@property double bgLocationTime;
@property (retain) NSArray *rootNodeEnergyRows;

- (id)time;
- (id)serialize;
- (id)energy;
- (id)initWithName:(id)arg1 withFGEnergy:(double)arg2 withBGEnergy:(double)arg3 withFGTime:(double)arg4 withBGTime:(double)arg5 withBGAudioTime:(double)arg6 withBGLocationTime:(double)arg7 withRootNodeEnergyRows:(id)arg8;

@end
