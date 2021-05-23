/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <FileProvider/FPOperation.h>

@class NSArray, NSMutableArray, NSProgress;

@interface FPDFetchAppLibraryIconOperation : FPOperation

{
    struct CGSize _desiredSize;
    double _screenScale;
    NSMutableArray *_appBundleIDsNotFound;
    _Bool _allowLocalLookup;
    _Bool _allowAppStoreLookup;
    NSArray *_appBundleIDs;
    NSProgress *_progress;
    CDUnknownBlockType _perAppBundleCompletion;
}

@property (nonatomic) _Bool allowLocalLookup;
@property (nonatomic) _Bool allowAppStoreLookup;
@property (nonatomic, readonly) NSArray *appBundleIDs;
@property (nonatomic, readonly) NSProgress *progress;
@property (copy, nonatomic) CDUnknownBlockType perAppBundleCompletion;

+ (id)sharedOperationQueue;

- (void)main;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAppBundleIDs:(id)arg1 desiredSize:(struct CGSize)arg2 screenScale:(double)arg3;
- (void)_perAppBundleCompletion:(id)arg1 iconData:(id)arg2 contentType:(id)arg3 error:(id)arg4;
- (void)_verifyAppBundleIDsFormat;
- (void)_retrieveIconsFromLocalDevice;
- (void)_retrieveIconsFromAppStore;
- (_Bool)_checkTypeIsValid:(id)arg1;
- (_Bool)_checkIsNotPrefixedByTeamID:(id)arg1;

@end
