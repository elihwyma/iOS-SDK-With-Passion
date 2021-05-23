/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSUUID;

@interface CMSignificantElevationSample : NSObject

{
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSNumber *fElevationAscended;
    NSNumber *fElevationDescended;
}

@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSNumber *elevationAscended;
@property (nonatomic, readonly) NSNumber *elevationDescended;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 elevationAscended:(id)arg5 elevationDescended:(id)arg6;
- (id)initWithSignificantElevation:(const struct CLSignificantElevation *)arg1;
- (id)initWithFilteredElevation:(const struct CLElevationChangeEntry *)arg1;

@end
