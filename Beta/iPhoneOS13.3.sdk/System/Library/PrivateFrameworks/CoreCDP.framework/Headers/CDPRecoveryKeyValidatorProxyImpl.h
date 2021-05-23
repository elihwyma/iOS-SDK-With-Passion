/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CDPRecoveryKeyValidator;

@interface CDPRecoveryKeyValidatorProxyImpl : NSObject

{
    id <CDPRecoveryKeyValidator> _validator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)confirmRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateRecoveryKey:(CDUnknownBlockType)arg1;
- (id)generateRecoveryKeyWithError:(id *)arg1;
- (_Bool)confirmRecoveryKey:(id)arg1 error:(id *)arg2;
- (id)initWithRemoteObject:(id)arg1;

@end
