/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class FPProviderDomain, NSProgress;

@interface FPDisconnectDomainOperation : FPActionOperation

{
    NSProgress *_remoteProgress;
    FPProviderDomain *_domain;
}

- (void)cancel;
- (id)initWithDomain:(id)arg1;
- (void)actionMain;
- (void)_tryDisconnectingSafely:(_Bool)arg1;

@end
