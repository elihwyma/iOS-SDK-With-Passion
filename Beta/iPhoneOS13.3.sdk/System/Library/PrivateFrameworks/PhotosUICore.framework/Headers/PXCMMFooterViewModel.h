/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFooterViewModel.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXMomentShareStatusPresentation;

@protocol PXCMMFooterViewModelActionDelegate;

@interface PXCMMFooterViewModel : PXFooterViewModel <Swift>

{
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    id <PXCMMFooterViewModelActionDelegate> _actionDelegate;
}

@property (weak, nonatomic) id <PXCMMFooterViewModelActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithMomentShareStatusPresentation:(id)arg1;
- (void)_updateAllProperties;

@end
