/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class CRKIdentityMarkedPrivateKey;

@interface CRKIdentityServicePublishPrivateKeysTaskRequest : CATTaskRequest

{
    CRKIdentityMarkedPrivateKey *_activeMarkedPrivateKey;
    CRKIdentityMarkedPrivateKey *_stagedMarkedPrivateKey;
}

@property (retain, nonatomic) CRKIdentityMarkedPrivateKey *activeMarkedPrivateKey;
@property (retain, nonatomic) CRKIdentityMarkedPrivateKey *stagedMarkedPrivateKey;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
