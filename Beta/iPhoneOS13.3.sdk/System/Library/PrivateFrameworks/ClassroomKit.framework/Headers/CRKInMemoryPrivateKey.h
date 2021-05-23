/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKIdentityConfiguration, NSData, NSString;

@interface CRKInMemoryPrivateKey : NSObject

{
    CRKIdentityConfiguration *_configuration;
}

@property (copy, nonatomic, readonly) CRKIdentityConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) struct __SecKey *underlyingPrivateKey;

- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end
