/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MSCMSCountersignatureAttribute : NSObject

{
    NSArray *_signerInfoSet;
}

@property (retain, readonly) NSArray *signerInfoSet;

- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;
- (id)initWithAttribute:(id)arg1 LAContext:(id)arg2 error:(id *)arg3;
- (_Bool)verifyCountersignatures:(id)arg1 error:(id *)arg2;
- (id)initWithSignerInfo:(id)arg1;
- (void)addSignerInfo:(id)arg1;
- (_Bool)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg1 verifyTime:(id)arg2 signature:(id)arg3 error:(id *)arg4;

@end
