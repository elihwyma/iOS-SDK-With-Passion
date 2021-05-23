/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXProtoFeatureView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXPhotoAnalysisStatusController;

@interface PXProtoFeaturePlaceholderView : PXProtoFeatureView <Swift>

{
    PXPhotoAnalysisStatusController *_statusController;
    NSString *_statusDescription;
    double _preferredStatusWidth;
}

@property (copy, nonatomic, readonly) NSString *statusDescription;
@property (nonatomic, readonly) double preferredStatusWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_setStatusDescription:(id)arg1;
- (void)statusDescriptionDidChange;
- (void)_updateStatusDescription;

@end
