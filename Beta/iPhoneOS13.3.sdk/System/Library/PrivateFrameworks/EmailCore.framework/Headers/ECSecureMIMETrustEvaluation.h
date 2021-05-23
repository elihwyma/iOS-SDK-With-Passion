/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface ECSecureMIMETrustEvaluation : NSObject

{
    unsigned int _trustResult;
    struct __SecTrust *_trust;
    NSString *_signerEmailAddress;
    unsigned long long _options;
    NSError *_error;
}

@property (nonatomic, readonly) struct __SecTrust *trust;
@property (copy, nonatomic, readonly) NSString *signerEmailAddress;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned int trustResult;
@property (nonatomic, readonly) _Bool requiresReevaluationWithNetworkAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_initWithTrust:(struct __SecTrust *)arg1 options:(unsigned long long)arg2 signerEmailAddress:(id)arg3;
- (void)_evaluate;

@end
