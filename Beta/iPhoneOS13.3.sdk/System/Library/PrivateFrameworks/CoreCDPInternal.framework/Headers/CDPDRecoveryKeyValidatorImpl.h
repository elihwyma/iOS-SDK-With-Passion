/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CDPContext, NSString;

@protocol CDPDRecoveryKeyValidatorInternalDelegate;

@interface CDPDRecoveryKeyValidatorImpl : NSObject

{
    CDPContext *_context;
    id <CDPDRecoveryKeyValidatorInternalDelegate> _delegate;
    _Bool _recoveryKeyVerified;
    NSString *_recoveryKey;
}

@property (nonatomic) _Bool recoveryKeyVerified;
@property (copy, nonatomic) NSString *recoveryKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (void)confirmRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateRecoveryKey:(CDUnknownBlockType)arg1;

@end
