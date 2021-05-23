/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CDPContext, NSDictionary, NSString;

@protocol CDPAuthProviderInternal;

@interface CDPDAccountRecoveryValidator : NSObject

{
    id <CDPAuthProviderInternal> _authProvider;
    CDPContext *_context;
    NSDictionary *_recoveredInfo;
    NSString *_recoveryKey;
}

@property (copy, nonatomic) NSDictionary *recoveredInfo;
@property (copy, nonatomic) NSString *recoveryKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)confirmRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateRecoveryKey:(CDUnknownBlockType)arg1;
- (id)_cdpErrorFromAuthKitError:(id)arg1;
- (id)initWithContext:(id)arg1 authProvider:(id)arg2;

@end
