/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface CRKIdentityCertificateSet : NSObject

{
    NSData *_activeIdentityCertificateData;
    NSData *_stagedIdentityCertificateData;
}

@property (copy, nonatomic, readonly) NSData *activeIdentityCertificateData;
@property (copy, nonatomic, readonly) NSData *stagedIdentityCertificateData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActiveIdentityCertificateData:(id)arg1 stagedIdentityCertificateData:(id)arg2;

@end
