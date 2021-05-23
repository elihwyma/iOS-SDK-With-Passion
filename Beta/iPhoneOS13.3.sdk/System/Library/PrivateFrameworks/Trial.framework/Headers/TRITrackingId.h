/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSUUID, TRISubject, TRISubjectProvider;

@interface TRITrackingId : NSObject

{
    TRISubject *_subject;
    TRISubjectProvider *_subjectProvider;
    int _projectId;
    NSUUID *_uuid;
    NSDate *_time;
    NSArray *_treatments;
}

@property (readonly) NSUUID *uuid;
@property (readonly) NSDate *time;
@property (readonly) NSArray *treatments;
@property (readonly) TRISubject *subject;

+ (_Bool)supportsSecureCoding;
+ (id)trackingIdWithProjectId:(int)arg1 treatments:(id)arg2;
+ (id)trackingIdWithProjectId:(int)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subjectProvider:(id)arg4 projectId:(int)arg5;
- (id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subject:(id)arg4;

@end
