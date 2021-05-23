/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SPBeaconLocation : NSObject

{
    NSDate *_timestamp;
    double _latitude;
    double _longitude;
    double _horizontalAccuracy;
    NSString *_source;
}

@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSString *source;
@property (nonatomic, readonly) double horizontalAccuracy;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 source:(id)arg5;

@end
