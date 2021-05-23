/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Foundation/NSObject.h>

@class ACUIAppDescription, NSDate, NSURL;

@protocol ACUIAppInstallerDelegate;

@interface ACUIAppInstaller : NSObject

{
    ACUIAppDescription *_app;
    NSDate *_dateOfLastReachabilityCheck;
    _Bool _cachedReachabilityResult;
    NSDate *_dateOfLastInstallationCheck;
    _Bool _resultOfLastInstallationCheck;
    _Bool _needsAvailableInStoreCheck;
    _Bool _availableInStoreResult;
    NSURL *_publisherURL;
    id <ACUIAppInstallerDelegate> _delegate;
}

@property (nonatomic, readonly) _Bool isInstalled;
@property (retain, nonatomic) NSURL *publisherURL;
@property (nonatomic, readonly) _Bool isDownloadable;
@property (nonatomic, readonly) _Bool requiresReachabilityCheckToDetermineDownloadability;
@property (nonatomic, readonly) _Bool isAvailableInStore;
@property (weak, nonatomic) id <ACUIAppInstallerDelegate> delegate;

+ (id)currentStoreFront;

- (void)start;
- (_Bool)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(_Bool)arg1;
- (void)_setCachedReachabilityResult:(_Bool)arg1;
- (_Bool)_isGreenTeaAvailable;
- (void)fetchDownloadability:(CDUnknownBlockType)arg1;
- (void)_performReachabilityCheck:(CDUnknownBlockType)arg1;
- (void)_setAvailableInStoreResult:(_Bool)arg1;
- (void)checkAvailabilityInStore:(CDUnknownBlockType)arg1;
- (void)_performAvailabilityCheck:(CDUnknownBlockType)arg1;
- (id)initForAppWithDescription:(id)arg1;

@end
