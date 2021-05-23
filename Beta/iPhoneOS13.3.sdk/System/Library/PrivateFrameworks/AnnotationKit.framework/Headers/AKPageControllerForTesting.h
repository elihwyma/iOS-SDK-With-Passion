/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKPageController.h>

@class AKController, AKGeometryHelper, AKLayerPresentationManager, AKPageModelController, UIView;

@interface AKPageControllerForTesting : AKPageController

{
    AKController *_testingController;
    unsigned long long _testingPageIndex;
    AKPageModelController *_testingPageModelController;
    AKLayerPresentationManager *_testingLayerPresentationManager;
    AKGeometryHelper *_testingGeometryHelper;
    UIView *_testingOverlayView;
}

@property (retain) AKController *testingController;
@property unsigned long long testingPageIndex;
@property (retain) AKPageModelController *testingPageModelController;
@property (retain) AKLayerPresentationManager *testingLayerPresentationManager;
@property (retain) AKGeometryHelper *testingGeometryHelper;
@property (retain) UIView *testingOverlayView;

- (id)init;
- (id)controller;
- (unsigned long long)pageIndex;
- (id)overlayView;
- (double)modelBaseScaleFactor;
- (id)geometryHelper;
- (id)pageModelController;
- (id)layerPresentationManager;
- (struct CGRect)maxPageRect;
- (struct CGPoint)convertPointFromOverlayToModel:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromOverlayToModel:(struct CGRect)arg1;
- (struct CGRect)convertRectFromModelToOverlay:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromModelToOverlay:(struct CGPoint)arg1;

@end
