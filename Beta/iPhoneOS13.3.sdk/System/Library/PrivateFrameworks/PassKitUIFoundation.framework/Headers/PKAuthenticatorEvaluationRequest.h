/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber, NSString;

@interface PKAuthenticatorEvaluationRequest : NSObject

{
    _Bool _useStockAuthInterface;
    _Bool _assumeUserIntentAvailable;
    long long _authenticatorPolicy;
    NSString *_reason;
    NSString *_processName;
    NSNumber *_processIdentifier;
    NSString *_PINTitle;
    NSNumber *_PINLength;
    NSData *_externalizedContext;
    struct __SecAccessControl *_accessControlRef;
    NSString *_physicalButtonTitle;
    NSString *_passcodeTitle;
    long long _policy;
}

@property (nonatomic, readonly) long long policy;
@property (nonatomic, readonly) long long authenticatorPolicy;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSNumber *processIdentifier;
@property (copy, nonatomic) NSString *PINTitle;
@property (copy, nonatomic) NSNumber *PINLength;
@property (retain, nonatomic) NSData *externalizedContext;
@property (nonatomic) struct __SecAccessControl *accessControlRef;
@property (nonatomic) _Bool useStockAuthInterface;
@property (copy, nonatomic) NSString *physicalButtonTitle;
@property (copy, nonatomic) NSString *passcodeTitle;
@property (nonatomic) _Bool assumeUserIntentAvailable;

- (id)init;
- (void)dealloc;
- (id)initWithPolicy:(long long)arg1;

@end
