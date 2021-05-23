/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/PARResponse.h>

@class NSArray;

@interface PARFlightResponse : PARResponse

{
    NSArray *_flightResults;
}

@property (retain, nonatomic) NSArray *flightResults;

+ (id)responseFromReply:(id)arg1;
+ (id)_debugResponseFromReply:(id)arg1;

- (id)description;

@end
