/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@interface CRKFetchBooksRequest : CATTaskRequest

{
    _Bool _includeImages;
}

@property (nonatomic) _Bool includeImages;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValidWithError:(id *)arg1;

@end
