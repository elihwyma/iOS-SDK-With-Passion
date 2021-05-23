/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@interface UIView (SBClassicLayout)

@property (nonatomic) struct CGPoint anchorPoint;

+ (void)sb_animateWithSettings:(id)arg1 mode:(long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)sb_animateWithSettings:(id)arg1 interactive:(_Bool)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)sb_firstDescendantOfViews:(id)arg1 passingTest:(CDUnknownBlockType)arg2;

- (_Bool)sb_hasActiveKeyboardOnScreen;
- (void)sbClassicLayout_applyTransformsForClassicPresentationInReferenceSpaceForInterfaceOrientation:(long long)arg1;
- (void)_sbClassicLayout_applyTransformsForClassicPresentationInReferenceSpace:(_Bool)arg1 forInterfaceOrientation:(long long)arg2 withInheritedScaleFromContainer:(double)arg3 applyInheritedScaleToTranslationAndCorners:(_Bool)arg4;
- (void)sbClassicLayout_applyTransformsForClassicPresentationInLayoutSpaceForInterfaceOrientation:(long long)arg1 withInheritedScaleFromContainer:(double)arg2 applyInheritedScaleToTranslationAndCorners:(_Bool)arg3;
- (id)sb_firstDescendantPassingTest:(CDUnknownBlockType)arg1;
- (id)sb_firstDescendantOfClass:(Class)arg1;
- (id)sb_firstDescendantOfClassNamed:(id)arg1;
- (id)sb_snapshotImage;
- (void)sb_removeAnimationsIncludingSubviews:(_Bool)arg1 predicate:(CDUnknownBlockType)arg2;
- (id)sb_generateSnapshotContentsSynchronously;
- (void)_printLayer:(id)arg1 level:(int)arg2;
- (void)sb_printLayerHierarchy;
- (void)sb_removeAllSubviews;
- (void)sb_removeAnimationsForKeys:(id)arg1 update:(CDUnknownBlockType)arg2;
- (void)_generateSnapshotOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sb_generateSnapshotContentsAsynchronouslyOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
