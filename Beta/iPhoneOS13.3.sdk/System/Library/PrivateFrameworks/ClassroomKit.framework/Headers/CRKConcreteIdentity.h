/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKCertificate, CRKPrivateKey;

@interface CRKConcreteIdentity : NSObject

{
    struct __SecIdentity *_underlyingIdentity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CRKCertificate> certificate;
@property (nonatomic, readonly) id <CRKPrivateKey> privateKey;
@property (nonatomic, readonly) struct __SecIdentity *underlyingIdentity;

+ (id)identityWithCertificate:(id)arg1 privateKey:(id)arg2;
+ (id)identityWithConfiguration:(id)arg1;

- (void)dealloc;
- (id)initWithIdentity:(struct __SecIdentity *)arg1;

@end
