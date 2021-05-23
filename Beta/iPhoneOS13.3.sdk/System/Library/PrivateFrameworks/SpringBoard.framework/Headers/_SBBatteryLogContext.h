/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _SBBatteryLogContext : NSObject

{
    _Bool _hasChargedPartially;
    int _capacity;
    int _voltage;
    NSArray *_foregroundApplications;
    double _usageTimeInSeconds;
    double _standbyTimeInSeconds;
}

@property (retain, nonatomic) NSArray *foregroundApplications;
@property (nonatomic) int capacity;
@property (nonatomic) int voltage;
@property (nonatomic) double usageTimeInSeconds;
@property (nonatomic) double standbyTimeInSeconds;
@property (nonatomic) _Bool hasChargedPartially;

@end
