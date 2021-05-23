/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UINavigationController.h>

@class NSArray, NSString, _PXFeedbackTapToRadarViewController;

@interface PXFeedbackTapToRadarViewController : UINavigationController

{
    _Bool _requestScreenshotPermission;
    CDUnknownBlockType _fileRadarHandler;
    NSArray *_routes;
    _PXFeedbackTapToRadarViewController *_feedbackViewController;
}

@property (retain, nonatomic) _PXFeedbackTapToRadarViewController *feedbackViewController;
@property (copy, nonatomic) CDUnknownBlockType fileRadarHandler;
@property (nonatomic) _Bool requestScreenshotPermission;
@property (copy, nonatomic) NSArray *routes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)availableRoutes;
- (void)didSelectFileRadarButtonWithScreenshotAllowed:(_Bool)arg1 attachDiagnose:(_Bool)arg2 selectedRoute:(id)arg3;
- (_Bool)shouldRequestScreenshotPermission;

@end
