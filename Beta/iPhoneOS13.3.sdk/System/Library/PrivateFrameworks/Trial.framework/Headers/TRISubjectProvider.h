/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject

{
    NSString *_path;
    _PASLock *_lock;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultProvider;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
- (_Bool)save;
- (id)subject;
- (id)anchorDate;
- (id)subjectWithProjectId:(int)arg1;
- (id)nextRotationDate;
- (void)decodeWithCoder:(id)arg1 guardedData:(id)arg2;
- (void)encodeWithCoder:(id)arg1 guardedData:(id)arg2;
- (_Bool)loadUsingGuardedData:(id)arg1;
- (unsigned long long)numberOfWeeksPerRotation;
- (id)nextRotationDateAfter:(id)arg1;
- (void)setNextRotationDate:(id)arg1;
- (void)rotateSubject;

@end
