/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

#import <BaseBoard/BSAction.h>

@class SUAutoInstallOperation, SUDownload;

@interface SUSUIAuthenticationAlertAction : BSAction

{
    _Bool _loaded;
    SUDownload *_download;
    SUAutoInstallOperation *_autoInstallOperation;
    _Bool _forInstallTonight;
    _Bool _canDeferInstallation;
}

@property (retain, nonatomic, readonly) SUDownload *download;
@property (retain, nonatomic, readonly) SUAutoInstallOperation *autoInstallOperation;
@property (nonatomic, readonly) _Bool forInstallTonight;
@property (nonatomic, readonly) _Bool canDeferInstallation;

- (void)_loadIfNecessary;
- (void)fireCompletionIfNecessaryForResult:(_Bool)arg1;
- (id)initWithDownload:(id)arg1 autoInstallOperation:(id)arg2 forInstallTonight:(_Bool)arg3 canDeferInstallation:(_Bool)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end
