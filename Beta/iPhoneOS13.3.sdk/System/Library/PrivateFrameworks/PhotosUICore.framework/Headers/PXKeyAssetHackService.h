/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDiagnosticsService.h>

@interface PXKeyAssetHackService : PXDiagnosticsService

+ (_Bool)keyAssetHackServiceIsEnabled;

- (id)title;
- (id)asset;
- (void)performAction;
- (_Bool)canPerformAction;
- (_Bool)shouldSetKeyAssetForHighlight:(id)arg1;

@end
