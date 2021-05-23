/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDiagnosticsService.h>

@class PXGView;

@interface PXGViewDebugHUDDiagnosticsService : PXDiagnosticsService

{
    PXGView *_gridView;
}

@property (nonatomic, readonly) PXGView *gridView;

- (id)title;
- (void)performAction;
- (id)initWithItemProviders:(id)arg1;
- (_Bool)canPerformAction;

@end
