/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@interface GEOLocalTimeInterval : NSObject <Swift>

{
    double _startTime;
    double _endTime;
}

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalTimeRange:(struct GEOPDLocalTimeRange *)arg1;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;

@end
