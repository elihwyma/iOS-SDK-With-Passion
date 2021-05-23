/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSData;

@interface CRKFetchStagedAdHocIdentityCertificateResultObject : CATTaskResultObject

{
    NSData *_stagedAdHocIdentityCertificate;
}

@property (copy, nonatomic) NSData *stagedAdHocIdentityCertificate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
