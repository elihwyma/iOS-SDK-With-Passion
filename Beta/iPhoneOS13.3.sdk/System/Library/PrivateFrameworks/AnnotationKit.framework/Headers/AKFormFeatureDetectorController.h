/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKController, NSString;

@interface AKFormFeatureDetectorController : NSObject

{
    AKController *_controller;
}

@property (weak) AKController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithController:(id)arg1;
- (struct CGSize)defaultFeatureSizeForPage:(id)arg1;
- (double)maximumFeatureWidthForPage:(id)arg1;
- (_Bool)wantsDefaultFeatures;
- (_Bool)detectFormFeatureAtPoint:(struct CGPoint)arg1 inPageController:(id)arg2;
- (id)formFeatureAtPoint:(struct CGPoint)arg1 inPageController:(id)arg2;
- (_Bool)formFeature:(id)arg1 intersectsAnnotationsOnPage:(id)arg2;
- (void)createAnnotationWithFeature:(id)arg1 onPageController:(id)arg2;
- (id)_convertFont:(id)arg1 toSize:(double)arg2;

@end
