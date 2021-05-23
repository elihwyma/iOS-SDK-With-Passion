/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface CMOdometerData : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSNumber *_distance;
    NSNumber *_currentSpeed;
    NSNumber *_averageSpeed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSNumber *distance;
@property (nonatomic, readonly) NSNumber *currentSpeed;
@property (nonatomic, readonly) NSNumber *averageSpeed;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (id)initWithDistance:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 currentSpeed:(id)arg4 averageSpeed:(id)arg5;

@end
