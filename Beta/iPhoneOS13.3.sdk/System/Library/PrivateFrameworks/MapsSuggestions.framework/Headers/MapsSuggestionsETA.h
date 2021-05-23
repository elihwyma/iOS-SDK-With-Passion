/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSDate, NSString;

@interface MapsSuggestionsETA : NSObject

{
    int _transportType;
    double _seconds;
    NSString *_shortTrafficString;
    NSString *_longTrafficString;
    NSDate *_time;
    CLLocation *_location;
    NSString *_originator;
}

@property (nonatomic, readonly) double seconds;
@property (nonatomic, readonly) NSString *shortTrafficString;
@property (nonatomic, readonly) NSString *longTrafficString;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSString *originator;
@property (nonatomic, readonly) double age;

+ (_Bool)supportsSecureCoding;
+ (id)ETAWithData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 transportType:(int)arg4 location:(id)arg5 time:(id)arg6;
- (id)trafficString;
- (id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 transportType:(int)arg4 location:(id)arg5 time:(id)arg6 originator:(id)arg7;
- (_Bool)isEqualToETA:(id)arg1;
- (_Bool)isValidForLocation:(id)arg1 requirements:(id)arg2;
- (id)initWithSeconds:(double)arg1 trafficString:(id)arg2 transportType:(int)arg3 location:(id)arg4;
- (_Bool)isBetterThanETA:(id)arg1 requirements:(id)arg2;

@end
