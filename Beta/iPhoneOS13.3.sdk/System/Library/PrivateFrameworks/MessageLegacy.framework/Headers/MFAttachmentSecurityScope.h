/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSData, NSFileCoordinator, NSURL;

@interface MFAttachmentSecurityScope : NSObject

{
    NSFileCoordinator *_fileCoordinator;
    NSURL *_securityScopedURL;
    NSData *_securityScopeToken;
    NSURL *_secureReadURL;
    _Bool _securedRead;
    NSURL *_secureWriteURL;
    _Bool _securedWrite;
}

+ (id)securityScopedURL:(id)arg1 withToken:(id)arg2;
+ (id)securityScopedURL:(id)arg1;

- (void)dealloc;
- (id)data;
- (_Bool)isReadable;
- (id)startWriteAccess;
- (void)stopAccess;
- (_Bool)isBundle;
- (id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2;
- (void)_attachSecurityScope;
- (id)_temporaryReadURL:(id)arg1 error:(id *)arg2;
- (void)_removeTemporaryReadURL;
- (id)securityScopeToken;
- (id)startReadAccess;

@end
