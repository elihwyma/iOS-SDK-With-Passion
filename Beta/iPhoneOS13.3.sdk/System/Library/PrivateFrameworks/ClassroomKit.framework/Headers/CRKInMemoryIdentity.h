/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKCertificate, CRKPrivateKey;

@interface CRKInMemoryIdentity : NSObject

{
    id <CRKCertificate> _certificate;
    id <CRKPrivateKey> _privateKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CRKCertificate> certificate;
@property (nonatomic, readonly) id <CRKPrivateKey> privateKey;
@property (nonatomic, readonly) struct __SecIdentity *underlyingIdentity;

+ (id)identityWithConfiguration:(id)arg1;

- (id)initWithCertificate:(id)arg1 privateKey:(id)arg2;

@end
