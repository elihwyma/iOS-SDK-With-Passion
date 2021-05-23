/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, PLLibraryServicesManager;

@protocol OS_dispatch_source;

@interface PLLibraryServicesCPLReadiness : NSObject

{
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;
    NSMutableArray *_photoLibraryCPLReadinessBlocks;
}

@property (readonly) _Bool isReadyForCloudPhotoLibrary;

- (void)invalidate;
- (id)libraryServicesManager;
- (id)initWithLibraryServicesManager:(id)arg1;
- (_Bool)_isAssetsdReadyForCPLManager;
- (void)stopWaitingForCPLReadiness;
- (void)_stopWaitingForCPLReadiness;
- (void)_callOutstandingCPLReadinessBlocks;
- (_Bool)_checkForCPLReadinessAndCallBlocks;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void)performOnceLibraryIsReadyForCPLManager:(CDUnknownBlockType)arg1;
- (void)processCloudPhotosLibraryStateChange:(_Bool)arg1;
- (void)pauseCloudPhotos:(_Bool)arg1 reason:(short)arg2;

@end
