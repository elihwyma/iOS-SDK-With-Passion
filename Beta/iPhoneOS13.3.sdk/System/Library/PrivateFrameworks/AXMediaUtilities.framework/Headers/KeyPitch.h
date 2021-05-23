/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@interface KeyPitch : NSObject

{
    double _frequency;
    double _timeOffsetMS;
}

@property (nonatomic) double frequency;
@property (nonatomic) double timeOffsetMS;

- (id)description;
- (id)initWithFrequency:(double)arg1 timeOffset:(double)arg2;

@end
