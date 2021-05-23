/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSDate, NSString;

@interface CRKFetchLogEventsRequest : CATTaskRequest

{
    NSDate *_cursorDate;
    NSString *_sessionToken;
}

@property (copy, nonatomic) NSDate *cursorDate;
@property (copy, nonatomic) NSString *sessionToken;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
