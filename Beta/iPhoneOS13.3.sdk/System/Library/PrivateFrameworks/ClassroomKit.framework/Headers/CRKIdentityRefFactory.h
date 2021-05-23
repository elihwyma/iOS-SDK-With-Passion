/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKIdentityConfiguration;

@interface CRKIdentityRefFactory : NSObject

{
    CRKIdentityConfiguration *_configuration;
}

@property (copy, nonatomic, readonly) CRKIdentityConfiguration *configuration;

- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)subject;
- (const void *)CMSHashingAlgorithmForSecAlgorithm:(unsigned int)arg1;
- (id)keyParameters;
- (id)certificateParametersWithCMSAlgorithm:(const void *)arg1;
- (void)safeRelease:(void *)arg1;
- (void)addClientAndServerAuthEKUsToParameters:(id)arg1;
- (struct __SecIdentity *)makeIdentityRefWithError:(id *)arg1;

@end
