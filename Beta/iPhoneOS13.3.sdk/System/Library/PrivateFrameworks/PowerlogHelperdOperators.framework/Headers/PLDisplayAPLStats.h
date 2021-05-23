/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface PLDisplayAPLStats : NSObject

{
    NSNumber *_avgRed;
    NSNumber *_avgGreen;
    NSNumber *_avgBlue;
    NSNumber *_frames;
    NSNumber *_avgPower;
    NSNumber *_avgAPL;
}

@property (retain) NSNumber *avgRed;
@property (retain) NSNumber *avgGreen;
@property (retain) NSNumber *avgBlue;
@property (retain) NSNumber *frames;
@property (retain) NSNumber *avgPower;
@property (retain) NSNumber *avgAPL;

@end
