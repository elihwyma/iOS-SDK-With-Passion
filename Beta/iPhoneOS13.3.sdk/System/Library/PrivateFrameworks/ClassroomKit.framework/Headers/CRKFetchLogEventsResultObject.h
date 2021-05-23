/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class CRKEventLog, NSDate, NSString;

@interface CRKFetchLogEventsResultObject : CATTaskResultObject

{
    CRKEventLog *_eventLog;
    NSDate *_currentDate;
    NSString *_sessionToken;
}

@property (retain, nonatomic) CRKEventLog *eventLog;
@property (retain, nonatomic) NSDate *currentDate;
@property (copy, nonatomic) NSString *sessionToken;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
