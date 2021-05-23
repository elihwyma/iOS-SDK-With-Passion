/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _CDInBedDetection : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    double _confidence;
}

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property double confidence;

- (double)duration;

@end
