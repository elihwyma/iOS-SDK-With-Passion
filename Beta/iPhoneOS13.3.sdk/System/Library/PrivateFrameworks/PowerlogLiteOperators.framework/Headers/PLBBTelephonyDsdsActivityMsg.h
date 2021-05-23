/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface PLBBTelephonyDsdsActivityMsg : NSObject

{
    NSDate *_signalStrengthLogTimestamp;
    NSString *_campedRAT;
    NSString *_simStatus;
}

@property (retain) NSDate *signalStrengthLogTimestamp;
@property (retain) NSString *campedRAT;
@property (retain) NSString *simStatus;

- (id)init;

@end
