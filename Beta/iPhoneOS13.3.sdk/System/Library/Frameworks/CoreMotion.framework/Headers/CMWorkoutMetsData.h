/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSUUID;

@interface CMWorkoutMetsData : NSObject

{
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSNumber *fMets;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
}

@property (nonatomic, readonly) NSNumber *mets;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) NSUUID *sourceId;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 mets:(id)arg5;
- (id)initWithCLWorkoutMets:(const struct CLWorkoutMets *)arg1;

@end
