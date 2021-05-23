/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface PLAssetsdClientService : NSObject

{
    NSMutableArray *_libraryUnavailabilityHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(_Bool)arg3 data:(id)arg4 error:(id)arg5;
- (void)downloadFinishedForIdentifier:(id)arg1 success:(_Bool)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)assetAvailableForIdentifier:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)resourceURLReceivedForIdentifier:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)resourceRepairIdentifier:(id)arg1 finishedWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)libraryBecameUnavailable:(id)arg1 reason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)addPhotoLibraryUnavailabilityHandler:(CDUnknownBlockType)arg1;

@end
