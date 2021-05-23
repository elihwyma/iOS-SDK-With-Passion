/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSError, NSString;

@interface CURangingMeasurement : NSObject

{
    unsigned int _flags;
    double _distanceMeters;
    double _distanceError;
    NSError *_error;
    double _horizontalAngle;
    double _horizontalError;
    NSString *_identifier;
    double _verticalAngle;
    double _verticalError;
    double _ptsScore;
    unsigned long long _timestampTicks;
}

@property (nonatomic) double horizontalAngle;
@property (nonatomic) double horizontalError;
@property (nonatomic) double verticalAngle;
@property (nonatomic) double verticalError;
@property (nonatomic) double distanceMeters;
@property (nonatomic) double distanceError;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double ptsScore;
@property (nonatomic) unsigned long long timestampTicks;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
