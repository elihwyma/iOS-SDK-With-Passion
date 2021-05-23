/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEOTrafficAndETAResult : NSObject

{
    _Bool _isSuccess;
    double _seconds;
    double _aggressiveTravelTime;
    double _conservativeTravelTime;
    NSString *_shortTrafficString;
    NSString *_longTrafficString;
}

@property (nonatomic) _Bool isSuccess;
@property (nonatomic) double seconds;
@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic) double conservativeTravelTime;
@property (copy, nonatomic) NSString *shortTrafficString;
@property (copy, nonatomic) NSString *longTrafficString;

@end
