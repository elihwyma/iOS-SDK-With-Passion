/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber;

@interface CMMetMinute : NSObject

{
    NSDate *fStartDate;
    NSNumber *fAverageIntensity;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSNumber *averageIntensity;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSample:(struct CLMetMinute)arg1;
- (id)initWithStartDate:(id)arg1 averageIntensity:(id)arg2;

@end
