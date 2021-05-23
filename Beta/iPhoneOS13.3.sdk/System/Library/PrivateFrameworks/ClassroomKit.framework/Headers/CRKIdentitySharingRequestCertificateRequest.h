/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSString;

@interface CRKIdentitySharingRequestCertificateRequest : CATTaskRequest

{
    NSString *_recipient;
}

@property (retain, nonatomic) NSString *recipient;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
