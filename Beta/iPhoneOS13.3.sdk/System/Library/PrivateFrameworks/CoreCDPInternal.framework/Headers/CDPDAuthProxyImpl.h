/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CDPDAuthProxyImpl : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_authContextFromCDPContext:(id)arg1;
- (void)cdpContext:(id)arg1 persistMasterKeyVerifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
