/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSData;

@interface CRKGenerateIdentityResultObject : CATTaskResultObject

{
    NSData *_certificateData;
    NSData *_privateKeyData;
}

@property (copy, nonatomic) NSData *certificateData;
@property (copy, nonatomic) NSData *privateKeyData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
