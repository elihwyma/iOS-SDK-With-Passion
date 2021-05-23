/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PXCPLServiceStatus, PXUICPLService;

@interface PUStorageManagementCPLService : NSObject

{
    PXUICPLService *_cplUIService;
    PXCPLServiceStatus *_lastServiceStatusUpdated;
    CDUnknownBlockType _uploadCallbackHandler;
}

@property (nonatomic, readonly) _Bool hasCompletedInitialUpload;
@property (copy, nonatomic) CDUnknownBlockType uploadCallbackHandler;

+ (id)sharedCPLService;

- (id)init;
- (void)_initCPLService;
- (void)_updateUploadCallbackHandler:(id)arg1;

@end
