/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSString;

@interface CRKFetchControlGroupIdentifiersRequest : CATTaskRequest

{
    _Bool _includeTemporary;
    NSString *_leaderIdentifier;
}

@property (copy, nonatomic) NSString *leaderIdentifier;
@property (nonatomic) _Bool includeTemporary;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
