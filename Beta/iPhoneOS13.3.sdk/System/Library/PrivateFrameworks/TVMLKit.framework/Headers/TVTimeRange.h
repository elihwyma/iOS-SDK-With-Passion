/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface TVTimeRange : NSObject

{
    double _startTime;
    double _endTime;
    double _duration;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

@end
