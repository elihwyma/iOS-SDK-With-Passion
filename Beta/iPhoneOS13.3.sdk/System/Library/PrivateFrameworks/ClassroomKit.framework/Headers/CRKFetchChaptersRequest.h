/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSString;

@interface CRKFetchChaptersRequest : CATTaskRequest

{
    NSString *_path;
    NSString *_identifierType;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *identifierType;
@property (copy, nonatomic) NSString *identifier;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValidWithError:(id *)arg1;

@end
