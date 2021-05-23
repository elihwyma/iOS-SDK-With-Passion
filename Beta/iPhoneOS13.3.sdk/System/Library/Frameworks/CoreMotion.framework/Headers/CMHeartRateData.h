/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMLogItem.h>

@class NSDate, NSString;

@interface CMHeartRateData : CMLogItem

{
    _Bool _error;
    double _heartRate;
    double _confidence;
    NSDate *_startDate;
    long long _dataSource;
    long long _mode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double heartRate;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) _Bool error;
@property (nonatomic, readonly) long long dataSource;
@property (nonatomic, readonly) long long mode;

+ (_Bool)supportsSecureCoding;
+ (id)dataSourceName:(long long)arg1;
+ (id)modeName:(long long)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (id)initWithHeartRate:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 startDate:(id)arg4 error:(_Bool)arg5 dataSource:(long long)arg6 mode:(long long)arg7;

@end
