/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXMutableImportController <Swift>

@property (nonatomic, getter=isLoadingContent) _Bool loadingContent;
@property (nonatomic, getter=isImportingAssets) _Bool importingAssets;
@property (nonatomic, getter=isDeletingAssets) _Bool deletingAssets;
@property (nonatomic, getter=isUserRequiredToTrustHostOnSourceDevice) _Bool userRequiredToTrustHostOnSourceDevice;
@property (nonatomic) _Bool hasLoadedInitialBatchOfAssets;
@property (nonatomic, getter=isLoadingInitialBatchOfAssets) _Bool loadingInitialBatchOfAssets;

@end
