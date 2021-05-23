/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSUUID;

@interface CMExerciseMinuteData : NSObject

{
    long long fRecordId;
    double fStartDate;
    NSUUID *fSourceId;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;

+ (_Bool)supportsSecureCoding;
+ (id)maxExerciseMinuteDataEntries;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 recordId:(long long)arg2 sourceId:(id)arg3;

@end
