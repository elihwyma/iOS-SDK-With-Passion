/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface CMElevationData : NSObject

{
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    unsigned long long fElevationAscended;
    unsigned long long fElevationDescended;
    long long fSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long elevationAscended;
@property (nonatomic, readonly) unsigned long long elevationDescended;

+ (_Bool)supportsSecureCoding;
+ (id)sourceName:(long long)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 elevationAscended:(unsigned long long)arg3 elevationDescended:(unsigned long long)arg4 source:(long long)arg5 recordId:(unsigned long long)arg6 sourceId:(id)arg7;
- (id)initWithSignificantElevationSample:(id)arg1;

@end
